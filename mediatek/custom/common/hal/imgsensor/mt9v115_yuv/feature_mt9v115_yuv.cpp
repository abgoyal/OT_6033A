


//  header file name where sensor features are specified;
//  it is included in this source file below.
#define CFG_FTBL_FILENAME   "cfg_ftbl_mt9v115_yuv.h"

//  sensor id; the same as specified in SensorList[] in sensorlist.cpp.
#define SENSOR_ID           MT9V115_SENSOR_ID

//  sensor name; just for debug log now.
#define SENSOR_NAME         "[mt9v115_yuv]"


#define LOG_TAG "feature_YUV"
//
#include <utils/Errors.h>
#include <cutils/log.h>
//
#define USE_CAMERA_FEATURE_MACRO 1  //define before "camera_feature.h"
#include "camera_feature.h"


//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//  Local Define
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#define TOTAL_TABLE_SCENE_NUM   static_cast<MUINT32>(NSFeature::ENumOfScene)


#define GETFINFO_SCENE_INDEP()          _GETFINFO_SCENE_INDEP(SENSOR_NAME)
#define END_GETFINFO_SCENE_INDEP()  _END_GETFINFO_SCENE_INDEP(SENSOR_NAME)


#define GETFINFO_SCENE_DEP()            _GETFINFO_SCENE_DEP(SENSOR_NAME)
#define END_GETFINFO_SCENE_DEP()    _END_GETFINFO_SCENE_DEP(SENSOR_NAME)


#define CONFIG_SCENE(_sid)              _CONFIG_SCENE(_sid, SENSOR_NAME)
#define END_CONFIG_SCENE()          _END_CONFIG_SCENE(SENSOR_NAME)


#define CHECK_FID_SI    CHECK_FID_YUV_SI
#define CHECK_FID_SD    CHECK_FID_YUV_SD


namespace
{
using namespace NSFeature;
#include CFG_FTBL_FILENAME
}


static
inline
NSFeature::PF_GETFINFO_SCENE_INDEP_T
GetFInfo_YUV_SI()
{
    return  NSYUV::NSSceneIndep::GetFInfo;
}


static
inline
NSFeature::PF_GETFINFO_SCENE_DEP_T
GetFInfo_YUV_SD()
{
    return  NSYUV::NSSceneDep::GetFInfo<TOTAL_TABLE_SCENE_NUM>;
}


#include "camera_custom_sensor.h"
#include "kd_imgsensor.h"


namespace NSFeature
{


typedef YUVSensorInfo<SENSOR_ID> SensorInfoSingleton_T;


template <>
SensorInfoBase*
SensorInfoSingleton_T::
GetInstance()
{
    static SensorInfoSingleton_T singleton;
    return &singleton;
}


template <>
MBOOL
SensorInfoSingleton_T::
GetFeatureProvider(FeatureInfoProvider_T& rFInfoProvider)
{
    rFInfoProvider.pfGetFInfo_SceneIndep = GetFInfo_YUV_SI();
    rFInfoProvider.pfGetFInfo_SceneDep   = GetFInfo_YUV_SD();

    return  MTRUE;
}


};  //  NSFeature

