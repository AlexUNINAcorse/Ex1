from setuptools import find_packages
from setuptools import setup

setup(
    name='sysmonitor_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('sysmonitor_interfaces', 'sysmonitor_interfaces.*')),
)
