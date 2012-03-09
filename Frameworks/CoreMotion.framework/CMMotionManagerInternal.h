/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSOperationQueue;

@interface CMMotionManagerInternal : NSObject  {
    int fSampleLock;
    struct Dispatcher { } *fAccelerometerDispatcher;
    double fAccelerometerUpdateInterval;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id fAccelerometerHandler;

    NSOperationQueue *fAccelerometerQueue;
    double fLastAccelerometerNotificationTimestamp;
    struct Sample { 
        double timestamp; 
        struct { 
            float x; 
            float y; 
            float z; 
        } acceleration; 
    } fLatestAccelerometerSample;
    struct Dispatcher { } *fGyroDispatcher;
    double fGyroUpdateInterval;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id fGyroHandler;

    NSOperationQueue *fGyroQueue;
    double fLastGyroNotificationTimestamp;
    struct Sample { 
        double timestamp; 
        struct { 
            float x; 
            float y; 
            float z; 
        } rotationRate; 
        boolfsync; 
    } fLatestGyroSample;
    struct Dispatcher { } *fDeviceMotionDispatcher;
    double fDeviceMotionUpdateInterval;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id fDeviceMotionHandler;

    NSOperationQueue *fDeviceMotionQueue;
    double fLastDeviceMotionNotificationTimestamp;
    struct Sample { 
        double timestamp; 
        struct { 
            struct { 
                double w; 
                double x; 
                double y; 
                double z; 
            } quaternion; 
            struct { 
                float x; 
                float y; 
                float z; 
            } userAcceleration; 
            struct { 
                float x; 
                float y; 
                float z; 
            } rotationRate; 
            struct { 
                float x; 
                float y; 
                float z; 
            } magneticField; 
            int magneticFieldCalibrationLevel; 
        } deviceMotion; 
        boolfsync; 
    } fLatestDeviceMotionSample;
    int fAttitudeReferenceFrame;
    void *fCompassCalibrationHud;
    boolfShowCompassCalibrationHudOnResume;
    boolfHaveSentDeviceRequiresMovementError;
    int fGeomagneticModelProviderClient;
    struct { 
        double x; 
        double y; 
        double z; 
        double magnitude; 
        double horizontal; 
        double declination; 
        double inclination; 
        double timestamp; 
    } fGeomagneticModel;
    boolfHaveSentTrueNorthUnavailableError;
    double fDeviceMotionStartTimestamp;
    struct Dispatcher { } *fMagnetometerDispatcher;
    double fMagnetometerUpdateInterval;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id fMagnetometerHandler;

    NSOperationQueue *fMagnetometerQueue;
    double fLastMagnetometerNotificationTimestamp;
    struct Sample { 
        double timestamp; 
        struct { 
            float x; 
            float y; 
            float z; 
        } magneticField; 
    } fLatestMagnetometerSample;
    boolfShowsDeviceMovementDisplay;
    struct Dispatcher { } *fPrivateAccelerometerDataDispatcher;
    int (*fPrivateAccelerometerDataCallback)();
    void *fPrivateAccelerometerDataCallbackInfo;
    struct Dispatcher { } *fPrivateGyroDataDispatcher;
    int (*fPrivateGyroDataCallback)();
    void *fPrivateGyroDataCallbackInfo;
    struct Dispatcher { } *fPrivateDeviceMotionDispatcher;
    int (*fPrivateDeviceMotionCallback)();
    void *fPrivateDeviceMotionCallbackInfo;
    boolfPrivateDeviceMotionUse9Axis;
    boolfInactive;
}


- (id)initWithInfo:(id)arg1;
- (void)dealloc;
- (id).cxx_construct;

@end