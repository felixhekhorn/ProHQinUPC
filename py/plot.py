# -*- coding: utf-8 -*-
"""Collect plotting tools."""

import pathlib

import matplotlib.pyplot as plt
import pandas as pd

here = pathlib.Path(__file__).parent


def plot():
    """Create a plot."""
    for var in ["pt", "y"]:
        df = pd.read_csv(
            here / ".." / f"test-{var}.dat",
            sep=" ",
            skipinitialspace=True,
            header=None,
            names=("left", "right", "value"),
        )
        df["central"] = (df["left"] + df["right"]) / 2.0
        df["dsigma"] = df["value"] / (df["right"] - df["left"])
        fig = plt.figure()
        fig.suptitle(var)
        ax = fig.add_subplot(111)
        ax.errorbar(
            df["central"],
            df["dsigma"],
            xerr=(df["left"] - df["central"], df["central"] - df["right"]),
            fmt=".",
            markersize=0,
        )
        plt.show()


plot()
