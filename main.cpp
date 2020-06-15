#include <iostream>
#include "yaml-cpp/yaml.h"

namespace equations{
    std::string MaterialFileName;
    bool Plasticity;
    double Tv;
}
namespace Boundaries{
    bool BC_fs;
    bool BC_dr;
    bool BC_of;
}
namespace DynamicRupture{
    int FL;
    std::string ModelFileName;
    bool inst_healing;
    bool GPwise;
    double XRef;
    double YRef;
    double ZRef;
    bool RF_output_on;
    int OutputPointType;
    double t_0;
}
namespace Elementwise{
    int printIntervalCriterion;
    double printtimeinterval_sec;
    //std::vector<int> OutputMask;
    std::string OutputMask;
    int refinement_strategy;
    int refinement;
}
namespace Pickpoint{
    int printtimeinterval;
    //std::vector<int> OutputMask;
    std::string OutputMask;
    int nOutpoints;
    std::string PPFileName;
}
namespace MeshNml{
    std::string MeshFile;
    std::string meshgenerator;
}
namespace Discretization{
    int Material;
    double CFL;
    int FixTimeStep;
    int ClusteredLTS;
}
namespace Output{
    std::string OutputFile;
    //std::vector<int> iOutputMask;
    std::string iOutputMask;
    //std::vector<int> iOutputMaskMaterial;
    std::string iOutputMaskMaterial;
    int Format;
    int Refinement;
    double TimeInterval;
    int printIntervalCriterion;
    bool SurfaceOutput;
    int SurfaceOutputRefinement;
    double SurfaceOutputInterval;
    double pickdt;
    int pickDtType;
    int FaultOutputFlag;
    int nRecordPoints;
    std::string RFileName;
}
namespace AbortCriteria{
    double EndTime;
}

int main() {

    YAML::Node config = YAML::LoadFile("parameters.yaml");

    equations::MaterialFileName = config["equations"]["MaterialFileName"].as<std::string>();
    equations::Plasticity = config["equations"]["Plasticity"].as<int>();
    equations::Tv = config["equations"]["Tv"].as<double>();

    Boundaries::BC_fs = config["Boundaries"]["BC_fs"].as<int>();
    Boundaries::BC_dr = config["Boundaries"]["BC_dr"].as<int>();
    Boundaries::BC_of = config["Boundaries"]["BC_of"].as<int>();

    DynamicRupture::FL = config["DynamicRupture"]["FL"].as<int>();
    DynamicRupture::ModelFileName = config["DynamicRupture"]["ModelFileName"].as<std::string>();
    DynamicRupture::inst_healing = config["DynamicRupture"]["inst_healing"].as<int>();
    DynamicRupture::GPwise = config["DynamicRupture"]["GPwise"].as<int>();
    DynamicRupture::XRef = config["DynamicRupture"]["XRef"].as<double>();
    DynamicRupture::YRef = config["DynamicRupture"]["YRef"].as<double>();
    DynamicRupture::ZRef = config["DynamicRupture"]["ZRef"].as<double>();
    DynamicRupture::RF_output_on = config["DynamicRupture"]["RF_output_on"].as<int>();
    DynamicRupture::OutputPointType = config["DynamicRupture"]["OutputPointType"].as<int>();
    DynamicRupture::t_0 = config["DynamicRupture"]["t_0"].as<double>();

    Elementwise::printIntervalCriterion = config["Elementwise"]["printIntervalCriterion"].as<int>();
    Elementwise::printtimeinterval_sec = config["Elementwise"]["printtimeinterval_sec"].as<double>();
    Elementwise::OutputMask = config["Elementwise"]["OutputMask"].as<std::string>();
    Elementwise::refinement_strategy = config["Elementwise"]["refinement_strategy"].as<int>();
    Elementwise::refinement = config["Elementwise"]["refinement"].as<int>();

    Pickpoint::printtimeinterval = config["Pickpoint"]["printtimeinterval"].as<int>();
    Pickpoint::OutputMask = config["Pickpoint"]["OutputMask"].as<std::string>();
    Pickpoint::nOutpoints = config["Pickpoint"]["nOutpoints"].as<int>();
    Pickpoint::PPFileName = config["Pickpoint"]["PPFileName"].as<std::string>();

    MeshNml::MeshFile = config["MeshNml"]["MeshFile"].as<std::string>();
    MeshNml::meshgenerator = config["MeshNml"]["meshgenerator"].as<std::string>();

    Discretization::Material = config["Discretization"]["Material"].as<int>();
    Discretization::CFL = config["Discretization"]["CFL"].as<double>();
    Discretization::FixTimeStep = config["Discretization"]["FixTimeStep"].as<int>();
    Discretization::ClusteredLTS = config["Discretization"]["ClusteredLTS"].as<int>();

    Output::OutputFile = config["Output"]["OutputFile"].as<std::string>();
    Output::iOutputMask = config["Output"]["iOutputMask"].as<std::string>();
    Output::iOutputMaskMaterial = config["Output"]["iOutputMaskMaterial"].as<std::string>();
    Output::Format = config["Output"]["Format"].as<int>();
    Output::Refinement = config["Output"]["Refinement"].as<int>();
    Output::TimeInterval = config["Output"]["TimeInterval"].as<double>();
    Output::printIntervalCriterion = config["Output"]["printIntervalCriterion"].as<int>();
    Output::SurfaceOutput = config["Output"]["SurfaceOutput"].as<int>();
    Output::SurfaceOutputRefinement = config["Output"]["SurfaceOutputRefinement"].as<int>();
    Output::SurfaceOutputInterval = config["Output"]["SurfaceOutputInterval"].as<double>();
    Output::pickdt = config["Output"]["pickdt"].as<double>();
    Output::pickDtType = config["Output"]["pickDtType"].as<int>();
    Output::FaultOutputFlag = config["Output"]["FaultOutputFlag"].as<int>();
    Output::nRecordPoints = config["Output"]["nRecordPoints"].as<int>();
    Output::RFileName = config["Output"]["RFileName"].as<std::string>();

    AbortCriteria::EndTime = config["AbortCriteria"]["EndTime"].as<double>();

    std::cout<<"OutputFile: "<<Output::OutputFile<<std::endl;
    std::cout<<"iOutputMask: "<<Output::iOutputMask<<std::endl;

    return 0;
}
