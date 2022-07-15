# -*- coding: utf-8 -*-
"""Collect plotting tools."""

import pathlib

import matplotlib.pyplot as plt
import pandas as pd

here = pathlib.Path(__file__).parent

data_path = here / ".." / "data"
img_path = here / ".." / "img"


def load(fn):
    """Load a histogram.

    Parameters
    ----------
    fn : str
        file name

    Returns
    -------
    pd.DataFrame
        (enhanced) histogram
    """
    df = pd.read_csv(
        data_path / fn,
        sep=" ",
        skipinitialspace=True,
        header=None,
        names=("left", "right", "value"),
    )
    df["central"] = (df["left"] + df["right"]) / 2.0
    df["dsigma"] = df["value"] / (df["right"] - df["left"])
    return df


def pt():
    """Show transverse momentum distribution of heavy antiquark."""
    df = load("HAQTransverseMomentum.dat")
    fig = plt.figure(constrained_layout=True)
    fig.suptitle("Transverse momentum distribution of heavy antiquark")
    ax = fig.add_subplot(111)
    ax.errorbar(
        df["central"],
        df["dsigma"],
        xerr=(df["left"] - df["central"], df["central"] - df["right"]),
        fmt=".",
        markersize=0,
    )
    ax.set_ylabel(r"$d\sigma/dp_T$ [1/GeV²]")
    ax.set_xlabel("$p_T$ [GeV]")
    fig.savefig(img_path / "HAQTransverseMomentum.pdf")


def y():
    """Show rapidity distribution of heavy antiquark."""
    df = load("HAQRapidity.dat")
    fig = plt.figure(constrained_layout=True)
    fig.suptitle("Rapidity distribution of heavy antiquark")
    ax = fig.add_subplot(111)
    ax.errorbar(
        df["central"],
        df["dsigma"],
        xerr=(df["left"] - df["central"], df["central"] - df["right"]),
        fmt=".",
        markersize=0,
    )
    ax.set_ylabel(r"$d\sigma/dy$ [1/GeV²]")
    ax.set_xlabel("$y$")
    fig.savefig(img_path / "HAQRapidity.pdf")


pt()
y()
