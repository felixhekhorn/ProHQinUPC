# configure
conf_data = configuration_data()
conf_data.set('VERSION_STR', meson.project_version())
# pass PDF support
# if get_option('morfintungb')
#     conf_data.set('HAVE_MORFINTUNGB', '1')
# endif
# if get_option('cteq3')
#     conf_data.set('HAVE_CTEQ3', '1')
# endif
# if get_option('grv')
#     conf_data.set('HAVE_GRV', '1')
# endif
# if get_option('grsv')
#     conf_data.set('HAVE_GRSV', '1')
# endif
# if get_option('dssv')
#     conf_data.set('HAVE_DSSV', '1')
# endif
# write
configure_file(output : 'config-buildtime.hpp',
               configuration : conf_data)

configuration_inc = include_directories('.')

# add sources
sources = []

sources += [
    'ME/BQED.cpp',
    'ME/A1.cpp',
    'ME/A2.cpp',
    'ME/A3.cpp',
]

# sources += [
#     'Pdf/PdfWrapper.cpp'
# ]

# add PDF source files
# if get_option('morfintungb')
#     sources += ['Pdf/mortungb.f']
# endif
# if get_option('cteq3')
#     sources += ['Pdf/cteq3.f']
# endif
# if get_option('grv')
#     sources += ['Pdf/grv94.f']
# endif
# if get_option('grsv')
#     sources += ['Pdf/grsvpol.f']
# endif
# if get_option('dssv')
#     sources += ['Pdf/DSSV_gluon_update.f']
# endif

# build
# LeProHQpp = shared_module(
#     'LeProHQpp',
#     ['Python.cpp'] + sources,
#     name_prefix: '',
#     include_directories : [inc, configuration_inc],
#     dependencies: [gsl_dep, gslcblas_dep, dvegas_dep, lhapdf_dep, boost_dep, rk_dep, py_dep, pye_dep, yaml_dep],
# )
executable(
   'ProHQinUPC',
   ['main.cpp'] + sources,
   include_directories : inc,
   dependencies: []
)
