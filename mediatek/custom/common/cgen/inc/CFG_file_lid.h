




#ifndef CFG_FILE_LID_H
#define CFG_FILE_LID_H



#define VER_LID(lid) lid##_VERNO lid
#define VER(lid)  lid##_VERNO


/* the definition of file LID */
typedef enum
{
	AP_CFG_FILE_VER_INFO_LID,
	AP_CFG_RDEB_FILE_BT_ADDR_LID,
//	AP_CFG_RDEB_FILE_WIFI_LID,	
	AP_CFG_RDCL_FILE_AUXADC_LID,
	AP_CFG_RDCL_CAMERA_PARA_LID,
	AP_CFG_RDCL_CAMERA_3A_LID,
	AP_CFG_RDCL_CAMERA_SHADING_LID,
	AP_CFG_RDCL_CAMERA_DEFECT_LID,
	AP_CFG_RDCL_CAMERA_SENSOR_LID,  //10
	AP_CFG_RDCL_CAMERA_LENS_LID,
	AP_CFG_RDCL_UART_LID,
	//AP_CFG_RDCL_UUID_LID,
	//AP_CFG_RDCL_SIM_LID,
	AP_CFG_RDCL_FACTORY_LID,
    AP_CFG_RDCL_BWCS_LID,
    AP_CFG_RDCL_HWMON_ACC_LID,
    AP_CFG_RDCL_HWMON_GYRO_LID,
//    AP_CFG_RDEB_WIFI_CUSTOM_LID,
    AP_CFG_RDEB_OMADM_USB_LID,
	AP_CFG_CUSTOM_BEGIN_LID,  ///Max LID.
}CFG_FILE_LID;
////if file num changed, the define of CFG_FILE_VER_FILE_REC_TOTAL should be changed too  ///
#define CFG_FILE_VER_FILE_REC_TOTAL   936

/* verno of data items */
/* ver file version */
#define AP_CFG_FILE_VER_INFO_LID_VERNO				"000"
/* BT file version */
#define AP_CFG_RDEB_FILE_BT_ADDR_LID_VERNO			"000"
/* WIFI file version */
//#define AP_CFG_RDEB_FILE_WIFI_LID_VERNO				"000"
/* WIFI MAC addr file version */
//#define AP_CFG_RDCL_FILE_WIFI_ADDR_LID_VERNO		"000"
/* ADC file version */
#define AP_CFG_RDCL_FILE_AUXADC_LID_VERNO			"000"

/* camera nvram files */
#define AP_CFG_RDCL_CAMERA_PARA_LID_VERNO			"000"
#define AP_CFG_RDCL_CAMERA_3A_LID_VERNO				"000"
#define AP_CFG_RDCL_CAMERA_SHADING_LID_VERNO		"000"
#define AP_CFG_RDCL_CAMERA_DEFECT_LID_VERNO			"000"
#define AP_CFG_RDCL_CAMERA_SENSOR_LID_VERNO			"000"
#define AP_CFG_RDCL_CAMERA_LENS_LID_VERNO			"000"

#define AP_CFG_RDCL_UART_LID_VERNO                  "000"

#define AP_CFG_RDCL_UUID_LID_VERNO                  "000"

#define AP_CFG_RDCL_SIM_LID_VERNO                   "000"

/* For the factory mode info. used */
#define AP_CFG_RDCL_FACTORY_LID_VERNO               "000"

#define AP_CFG_RDCL_BWCS_LID_VERNO				    "000"

#define AP_CFG_RDCL_HWMON_ACC_LID_VERNO             "000"
#define AP_CFG_RDCL_HWMON_GYRO_LID_VERNO					"000"
//#define AP_CFG_RDEB_WIFI_CUSTOM_LID_VERNO				"000"
#define AP_CFG_RDEB_OMADM_USB_LID_VERNO				"000"
#endif /* CFG_FILE_LID_H */

