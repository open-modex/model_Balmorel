# model_Balmorel
This repository contains all model development using Balmorel within the open_MODEX project.

## What is Balmorel?

Balmorel is a partial equilibrium model for analysing the electricity and combined heat and power sectors in an international perspective. It is highly versatile and may be applied for long range planning as well as shorter time operational analysis. Balmorel is implemented as a mainly linear programming optimisation problem.

The model is developed in a model language, and the source code is readily available under open source conditions, thus providing complete documentation of the functionalities. Moreover, the user may modify the model according to specific requirements, making the model suited for any purpose within the focus parts of the energy system.

## What can Balmorel be used for?

The Balmorel model has been applied in projects or other activities in a number of countries, e.g., in  Denmark, Norway, Sweden, Estonia, Latvia, Lithuania, Poland, Germany, Austria, Ghana, Mauritius, Canada and China. It has been used for analyses of, i.a., security of electricity supply, the role of flexible electricity demand, hydrogen technologies, wind power development, the role of natural gas, development of international electricity markets, market power, heat transmission and pricing, expansion of electricity transmission, international markets for green certificates and emission trading, electric vehicles in the energy system, environmental policy evaluation.

See "Activities" and "Publications" sections in the menu for description of ongoing and past projects using the Balmorel model.

## Who can use Balmorel?

Balmorel is a modelling tool that can be used by energy system experts, energy companies, authorities, transmission system operators, researchers and others for the analyses of future developments of a regional energy sector.

## How is Balmorel supported and further developed?

The model is developed and distributed under open source ideals. The source code has been provided on its homepage since 2001 and was assigned the [ISC license](https://opensource.org/licenses/ISC) in 2017. Ample documentation is available in the folder [within this repository](base/documentation). Application examples and contact information can be found on the [Balmorel homepage](https://balmorel.com). Presently the model development is mainly project driven, with a users' network around it, supporting the open source development idea.

## Installation for *open_MODEX*

### Install GAMS

1. Choose the GAMS version depending on your system: https://www.gams.com/download/
2. Follow the steps of installation wizard.

### Set up a framework environment

1. Create a directory with the __project name__ in any convenient location.
2. Download the model from [GitHub](https://github.com/open-modex/model_Balmorel) by either:
	- cloning the Balmorel GitHub repository, or
	- downloading the zip file and extracting all to the previously created project directory.

### Open a model in GAMS

1. Navigate to one of the scenario directories, e.g. __/model_Balmorel/1__.
2. Navigate to the __/model_Balmorel/1/model__ folder and open the .gpr file (GAMS project file).
3. After GAMS startup, open the Balmore.gms file by:
	- pressing Ctrl+o and
	- navigating to __model_Balmorel/base/model__ where the .gms file is located.

### Run the model

Run the model by simply pressing __F9__.

### Access results

There are many options, here are two:
1. The open_MODEX result files are placed in the model folder under:
	- __/model_Balmorel/1/output/results__.
2. Open in GAMS the __all_endofmodel.gdx__ file, which is located in the model folder under:
	- __/model_Balmorel/1/model__.

### Scenario data

1. The __input data__ for the open_MODEX models is stored as __.inc__ files (plain text). They are created by the __Data.xlsm__ file, located under:
	- __model_Balmorel/base__.

2. Instructions for use can be found on its first sheet.