#include <iostream>
#include <fstream>
#include <map>
#include <cassert>
#include "yaml-cpp/yaml.h"

int main() {

    //YAML::Emitter out;
    YAML::Node config = YAML::LoadFile("parameters.yaml");

    /*
    if (config["equations"]) {
        std::cout << "equations:\n" << config["equations"]<< "\n";
    }

    const std::string username = config["name"].as<std::string>();
    std::cout<<username<<std::endl;

    YAML::Node node = YAML::Load("[1, 2, 3]");
    assert(node.Type() == YAML::NodeType::Sequence);
    assert(node.IsSequence());

    YAML::Node primes = YAML::Load("[2, 3, 5, 7, 11]");
    for (std::size_t i=0;i<primes.size();i++) {
        std::cout << primes[i].as<int>() << "\n";
    }

    primes.push_back(13);
    assert(primes.size() == 6);

    YAML::Node lineup = YAML::Load("{1B: Prince Fielder, 2B: Rickie Weeks, LF: Ryan Braun}");
    for(YAML::const_iterator it=lineup.begin();it!=lineup.end();++it) {
        std::cout << "Playing at " << it->first.as<std::string>() << " is " << it->second.as<std::string>() << "\n";
    } */

    std::string MaterialFileName = config["equations"]["MaterialFileName"].as<std::string>();
    std::string Plasticity = config["equations"]["Plasticity"].as<std::string>();
    std::string Tv = config["equations"]["Tv"].as<std::string>();

    std::string BC_fs = config["Boundaries"]["BC_fs"].as<std::string>();
    std::string BC_dr = config["Boundaries"]["BC_dr"].as<std::string>();
    std::string BC_of = config["Boundaries"]["BC_of"].as<std::string>();

    std::string FL = config["DynamicRupture"]["FL"].as<std::string>();
    std::string ModelFileName = config["DynamicRupture"]["ModelFileName"].as<std::string>();
    std::string inst_healing = config["DynamicRupture"]["inst_healing"].as<std::string>();
    std::string GPwise = config["DynamicRupture"]["GPwise"].as<std::string>();
    std::string XRef = config["DynamicRupture"]["XRef"].as<std::string>();
    std::string YRef = config["DynamicRupture"]["YRef"].as<std::string>();
    std::string ZRef = config["DynamicRupture"]["ZRef"].as<std::string>();
    std::string RF_output_on = config["DynamicRupture"]["RF_output_on"].as<std::string>();
    std::string OutputPointType = config["DynamicRupture"]["OutputPointType"].as<std::string>();
    std::string t_0 = config["DynamicRupture"]["t_0"].as<std::string>();

    std::string printIntervalCriterion = config["Elementwise"]["printIntervalCriterion"].as<std::string>();
    std::string printtimeinterval_sec = config["Elementwise"]["printtimeinterval_sec"].as<std::string>();
    std::string OutputMask = config["Elementwise"]["OutputMask"].as<std::string>();
    std::string refinement_strategy = config["Elementwise"]["refinement_strategy"].as<std::string>();
    std::string refinement = config["Elementwise"]["refinement"].as<std::string>();

    std::string printtimeinterval = config["Pickpoint"]["printtimeinterval"].as<std::string>();
    std::string OutputMask_1 = config["Pickpoint"]["OutputMask"].as<std::string>();
    std::string nOutpoints = config["Pickpoint"]["nOutpoints"].as<std::string>();
    std::string PPFileName = config["Pickpoint"]["PPFileName"].as<std::string>();

    std::string MeshFile = config["MeshNml"]["MeshFile"].as<std::string>();
    std::string meshgenerator = config["MeshNml"]["meshgenerator"].as<std::string>();

    std::string Material = config["Discretization"]["Material"].as<std::string>();
    std::string CFL = config["Discretization"]["CFL"].as<std::string>();
    std::string FixTimeStep = config["Discretization"]["FixTimeStep"].as<std::string>();
    std::string ClusteredLTS = config["Discretization"]["ClusteredLTS"].as<std::string>();

    std::string OutputFile = config["Output"]["OutputFile"].as<std::string>();
    std::string iOutputMask = config["Output"]["iOutputMask"].as<std::string>();
    std::string iOutputMaskMaterial = config["Output"]["iOutputMaskMaterial"].as<std::string>();
    std::string Format = config["Output"]["Format"].as<std::string>();
    std::string Refinement = config["Output"]["Refinement"].as<std::string>();
    std::string TimeInterval = config["Output"]["TimeInterval"].as<std::string>();
    std::string printIntervalCriterion_1 = config["Output"]["printIntervalCriterion"].as<std::string>();
    std::string SurfaceOutput = config["Output"]["SurfaceOutput"].as<std::string>();
    std::string SurfaceOutputRefinement = config["Output"]["SurfaceOutputRefinement"].as<std::string>();
    std::string SurfaceOutputInterval = config["Output"]["SurfaceOutputInterval"].as<std::string>();
    std::string pickdt = config["Output"]["pickdt"].as<std::string>();
    std::string pickDtType = config["Output"]["pickDtType"].as<std::string>();
    std::string FaultOutputFlag = config["Output"]["FaultOutputFlag"].as<std::string>();
    std::string nRecordPoints = config["Output"]["nRecordPoints"].as<std::string>();
    std::string RFileName = config["Output"]["RFileName"].as<std::string>();

    std::string EndTime = config["AbortCriteria"]["EndTime"].as<std::string>();

    std::cout<<"OutputFile: "<<OutputFile<<std::endl;
    std::cout<<"iOutputMask: "<<iOutputMask<<std::endl;


    /*
    out << YAML::BeginSeq;
    out << "eggs";
    out << "bread";
    out << "milk";
    out << YAML::EndSeq;

    out << YAML::BeginMap;
    out << YAML::Key << "name";
    out << YAML::Value << "Ryan Braun";
    out << YAML::Key << "position";
    out << YAML::Value << "LF";
    out << YAML::EndMap;

    out << YAML::BeginMap;
    out << YAML::Key << "name";
    out << YAML::Value << "Barack Obama";
    out << YAML::Key << "children";
    out << YAML::Value << YAML::BeginSeq << "Sasha" << "Malia" << YAML::EndSeq;
    out << YAML::EndMap;
     */
/*
    out << YAML::BeginMap;
        out << YAML::Key << "equations";
        out << YAML::Value;
        out << YAML::BeginMap;
            out << YAML::Key << "MaterialFileName" << YAML::Value << "material.yaml";
            out << YAML::Key << "Plasticity" << YAML::Value << "1";
            out << YAML::Key << "Tv" << YAML::Value << "0.03";
        out << YAML::EndMap;
    out << YAML::EndMap;


    std::cout << out.c_str(); // prints "Hello, World!"

    */
    return 0;
}
