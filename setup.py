from setuptools import find_packages, setup, Extension


setup(
    name='lunzi',
    version='0.0.1',
    classifiers=[
        # Trove classifiers
        # Full list: https://pypi.python.org/pypi?%3Aaction=list_classifiers
        'Programming Language :: Python :: 3',
        'Programming Language :: Python :: 3.8',
    ],
    keywords='Server',
    packages=find_packages(exclude=('source', 'tests', "tests.*")),
    ext_modules=[
        Extension("lunzi.lunzi", ["lunzi/lunzi.c"]),
    ],
    install_requires=[],
    python_requires='>=3.6',
)
