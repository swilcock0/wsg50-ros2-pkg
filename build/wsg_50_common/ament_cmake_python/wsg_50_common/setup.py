from setuptools import find_packages
from setuptools import setup

setup(
    name='wsg_50_common',
    version='0.0.0',
    packages=find_packages(
        include=('wsg_50_common', 'wsg_50_common.*')),
)
