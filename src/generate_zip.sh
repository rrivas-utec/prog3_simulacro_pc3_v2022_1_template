#!/usr/bin/env bash

project_name='prog3_simulacro_pc3_v2022_1'
source_code='
        P1.h P1.cpp
        P2.h P2.cpp
  '
rm -f ${project_name}.zip
zip -r -S ${project_name} ${source_code}