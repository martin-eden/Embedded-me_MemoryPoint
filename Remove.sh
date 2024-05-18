#!/bin/bash

# Uninstall library
arduino-cli lib uninstall me_MemoryPoint

# Uninstall dependencies
arduino-cli lib uninstall \
  me_BaseTypes
