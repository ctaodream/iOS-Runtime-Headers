/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSError : NSObject <NSCopying, NSSecureCoding> {
    int _code;
    NSString *_domain;
    void *_reserved;
    NSDictionary *_userInfo;
}

@property (getter=_mapkit_isCLDenied, nonatomic, readonly) BOOL _mapkit_CLDenied;
@property (getter=_mapkit_isCLErrorNetwork, nonatomic, readonly) BOOL _mapkit_CLErrorNetwork;
@property (getter=_mapkit_isCLHeadingFailure, nonatomic, readonly) BOOL _mapkit_CLHeadingFailure;
@property (getter=_mapkit_isCLLocationUnknown, nonatomic, readonly) BOOL _mapkit_CLLocationUnknown;
@property (nonatomic, readonly, retain) NSURL *_mapkit_locationErrorSettingsURL;
@property (readonly) int code;
@property (getter=isComparisonError, nonatomic, readonly) BOOL comparisonError;
@property (readonly, copy) NSString *domain;
@property (getter=isFromRequest, nonatomic, readonly) BOOL fromRequest;
@property (getter=hd_isFromRequest, nonatomic, readonly) BOOL hd_fromRequest;
@property (nonatomic, readonly) unsigned short hd_messageID;
@property (nonatomic, readonly) NSString *hd_messageIDSIdentifier;
@property (nonatomic, readonly) NSDate *hd_messageSent;
@property (nonatomic, readonly) NSDictionary *hd_persistentUserInfo;
@property (readonly, copy) NSString *helpAnchor;
@property (nonatomic, readonly) NSString *idsIdentifier;
@property (nonatomic, readonly) BOOL isAuthenticationError;
@property (readonly, copy) NSString *localizedDescription;
@property (readonly, copy) NSString *localizedFailureReason;
@property (readonly, copy) NSArray *localizedRecoveryOptions;
@property (readonly, copy) NSString *localizedRecoverySuggestion;
@property (nonatomic, readonly) unsigned short messageID;
@property (nonatomic, readonly) NSDate *messageSent;
@property (nonatomic, readonly) NSDictionary *persistentUserInfo;
@property (readonly) id recoveryAttempter;
@property (readonly, copy) NSDictionary *userInfo;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (void)_registerBuiltInFormatters;
+ (void)_registerFormatter:(int (*)arg1 forErrorKey:(id)arg2 parameters:(const char *)arg3;
+ (void)_web_addErrorsWithCodesAndDescriptions:(id)arg1 inDomain:(id)arg2;
+ (id)_web_errorWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3;
+ (id)_web_errorWithDomain:(id)arg1 code:(int)arg2 failingURL:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(int)arg2 userInfo:(id)arg3;
+ (void)setUserInfoValueProviderForDomain:(id)arg1 provider:(id /* block */)arg2;
+ (BOOL)supportsSecureCoding;
+ (id /* block */)userInfoValueProviderForDomain:(id)arg1;

- (unsigned long)_cfTypeID;
- (id)_cocoaErrorString:(id)arg1;
- (id)_cocoaErrorString:(id)arg1 fromBundle:(id)arg2 tableName:(id)arg3;
- (id)_cocoaErrorStringWithKind:(id)arg1;
- (id)_cocoaErrorStringWithKind:(id)arg1 variant:(id)arg2;
- (int)_collectApplicableUserInfoFormatters:(struct { /* ? */ }**)arg1 max:(int)arg2;
- (id)_formatCocoaErrorString:(id)arg1 parameters:(const char *)arg2 applicableFormatters:(struct { /* ? */ }**)arg3 count:(int)arg4;
- (struct __CFString { }*)_retainedUserInfoCallBackForKey:(id)arg1;
- (BOOL)_web_errorIsInDomain:(id)arg1;
- (id)_web_failingURL;
- (id)_web_initWithDomain:(id)arg1 code:(int)arg2 failingURL:(id)arg3;
- (id)_web_initWithDomain_nowarn:(id)arg1 code:(int)arg2 URL:(id)arg3;
- (id)_web_localizedDescription;
- (id)brc_description;
- (int)code;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (unsigned int)hash;
- (id)helpAnchor;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 code:(int)arg2 userInfo:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)localizedDescription;
- (id)localizedFailureReason;
- (id)localizedRecoveryOptions;
- (id)localizedRecoverySuggestion;
- (id)recoveryAttempter;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)userInfo;

// Image: /System/Library/Frameworks/Accounts.framework/Accounts

- (id)_sanitizeObject:(id)arg1;
- (id)ac_secureCodingError;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (id)errorFromErrno;
+ (id)errorWithPOSIXCode:(int)arg1;

- (id)CKClientSuitableError;
- (BOOL)CKIsNotFoundError;
- (BOOL)isComparisonError;
- (BOOL)isPOSIXErrorCode:(int)arg1;

// Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth

+ (id)errorWithBTResult:(id)arg1;

// Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation

- (void)cl_json_serializeValue:(struct value_ostream { bool x1; struct ostream {} *x2; }*)arg1;

// Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion

- (void)cl_json_serializeValue:(struct value_ostream { bool x1; struct ostream {} *x2; }*)arg1;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

+ (id)_defaultDescriptionForCode:(int)arg1;
+ (id)errorWithCADResult:(int)arg1;
+ (id)errorWithCADResult:(int)arg1 action:(id)arg2;
+ (id)errorWithCode:(int)arg1;
+ (id)errorWithCode:(int)arg1 description:(id)arg2;
+ (id)errorWithCode:(int)arg1 description:(id)arg2 reason:(id)arg3;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)hk_error:(int)arg1 description:(id)arg2;
+ (id)hk_error:(int)arg1 description:(id)arg2 underlyingError:(id)arg3;
+ (id)hk_error:(int)arg1 format:(id)arg2;

- (BOOL)hk_isAuthorizationDeniedError;
- (BOOL)hk_isAuthorizationNotDeterminedError;
- (BOOL)hk_isDatabaseAccessibilityError;
- (BOOL)hk_isDeviceNotFoundError;
- (BOOL)hk_isHealthKitError;
- (BOOL)hk_isInternalFailureError;
- (BOOL)hk_isInvalidArgumentError;
- (void)hk_logWithDatabaseAccessibilityAtLogLevel:(int)arg1 format:(id)arg2;
- (void)hk_logWithoutDatabaseAccessibiityErrors:(id)arg1;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)hmErrorWithCode:(int)arg1;
+ (id)hmErrorWithCode:(int)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4;
+ (id)hmErrorWithCode:(int)arg1 userInfo:(id)arg2;

- (id)shortDescription;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (int)_mapkit_directionsErrorCode;
- (id)_mapkit_directionsErrorWithDetail:(struct { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg1;
- (id)_mapkit_error;
- (BOOL)_mapkit_isCLDenied;
- (BOOL)_mapkit_isCLErrorNetwork;
- (BOOL)_mapkit_isCLHeadingFailure;
- (BOOL)_mapkit_isCLLocationUnknown;
- (BOOL)_mapkit_isDirectionsError;
- (id)_mapkit_locationErrorSettingsURL;
- (int)_mapkit_underlyingGEOError;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)_ph_genericErrorWithUnderlyingError:(id)arg1 localizedDescription:(id)arg2;
+ (id)ph_errorWithDomain:(id)arg1 code:(int)arg2 userInfo:(id)arg3;
+ (id)ph_genericErrorWithLocalizedDescription:(id)arg1;
+ (id)ph_genericErrorWithUnderlyingError:(id)arg1 localizedDescription:(id)arg2;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (id)failingURL;

// Image: /System/Library/Frameworks/Social.framework/Social

+ (id)APIAuthorizationErrorFromErrorCode:(int)arg1;
+ (id)APIFakeUserErrorFromErrorCode:(int)arg1;
+ (id)APIGenericErrorFromErrorCode:(int)arg1;
+ (id)APIInternalServerErrorFromErrorCode:(int)arg1;
+ (id)APILimitErrorFromErrorCode:(int)arg1;
+ (id)APIParameterErrorFromErrorCode:(int)arg1;
+ (id)APIUserErrorFromErrorCode:(int)arg1;
+ (id)errorFromTencentWeiboAPIResponseErrorWithType:(int)arg1 code:(int)arg2;

- (id)encodeableError;
- (id)encodeableError;
- (id)encodeableError;
- (id)encodeableError;

// Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity

+ (id)userInfoDictionaryWithErrorStringsForErrorCode:(int)arg1;
+ (id)wcErrorFromInternalError:(id)arg1;
+ (id)wcErrorWithCode:(int)arg1;
+ (id)wcErrorWithCode:(int)arg1 underlyingError:(id)arg2;
+ (id)wcErrorWithCode:(int)arg1 underlyingWCErrorWithCode:(int)arg2;
+ (id)wcErrorWithCode:(int)arg1 userInfo:(id)arg2;
+ (id)wcInternalErrorWithCode:(int)arg1;

// Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation

- (id)ATPError;
- (id)initWithATPError:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities

+ (id)_ax_errorWithDomain:(id)arg1 code:(int)arg2 description:(id)arg3 arguments:(void*)arg4;
+ (id)ax_errorWithDomain:(id)arg1 code:(int)arg2 description:(id)arg3;
+ (id)ax_errorWithDomain:(id)arg1 description:(id)arg2;

- (id)ax_nonRedundantDescription;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

- (id)userReadableError;

// Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit

+ (id)ak_errorWithCode:(int)arg1;
+ (id)ak_wrappedAnisetteError:(long)arg1;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

+ (id)bs_timeoutError;

- (BOOL)bs_isCancelledError;
- (BOOL)bs_isTimeoutError;

// Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

+ (id)brc_addPartialError:(id)arg1 forURL:(id)arg2 toError:(id)arg3;
+ (id)brc_errorAccountMismatch;
+ (id)brc_errorContainerNotFound:(id)arg1;
+ (id)brc_errorDaemonShouldBeLoggedOut;
+ (id)brc_errorDocumentAtURL:(id)arg1 isNotExternalToContainer:(id)arg2;
+ (id)brc_errorDocumentIsNoLongerSharedAtURL:(id)arg1;
+ (id)brc_errorDocumentIsNotShared;
+ (id)brc_errorDocumentIsNotSharedAtURL:(id)arg1;
+ (id)brc_errorDocumentWithFilename:(id)arg1 size:(long long)arg2 isTooLargeToUpload:(long long)arg3;
+ (id)brc_errorInvalidParameter:(id)arg1 value:(id)arg2;
+ (id)brc_errorItemNotFound:(id)arg1;
+ (id)brc_errorMethodNotImplemented:(const char *)arg1;
+ (id)brc_errorNoContainerForBundle:(id)arg1;
+ (id)brc_errorNoDocumentAtURL:(id)arg1 underlyingPOSIXError:(int)arg2;
+ (id)brc_errorNotInCloud:(id)arg1;
+ (id)brc_errorOperationCancelled;
+ (id)brc_errorPathOutsideAnyCloudDocsContainerAtURL:(id)arg1;
+ (id)brc_errorPermissionErrorAtURL:(id)arg1;
+ (id)errorFromErrno;
+ (id)errorWithDomain:(id)arg1 code:(int)arg2 description:(id)arg3;
+ (id)errorWithPOSIXCode:(int)arg1;
+ (id)errorWithPOSIXCode:(int)arg1 description:(id)arg2;

- (BOOL)br_isCloudDocsErrorCode:(int)arg1;
- (BOOL)isCocoaErrorCode:(int)arg1;
- (BOOL)isPOSIXErrorCode:(int)arg1;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

+ (id)brc_daemonAccessDisabledError;
+ (void)load;

- (id)br_cloudKitErrorForIdentifier:(id)arg1;
- (double)br_suggestedRetryTimeInterval;
- (BOOL)brc_checkErrorsFromCloudKit:(id /* block */)arg1;
- (id)brc_cloudKitErrorForRecordID:(id)arg1;
- (id)brc_cloudKitErrorForSubscriptionID:(id)arg1;
- (unsigned int)brc_containerResetErrorForSharedZone:(BOOL)arg1 resetReason:(const char **)arg2;
- (BOOL)brc_isBlacklistError;
- (BOOL)brc_isCloudKitCancellationError;
- (BOOL)brc_isCloudKitErrorCode:(int)arg1;
- (BOOL)brc_isCloudKitErrorRequiringAssetRescan;
- (BOOL)brc_isCloudKitErrorRequiringAssetReupload;
- (BOOL)brc_isCloudKitErrorRequiringSkipThrottling;
- (BOOL)brc_isCloudKitErrorRequiringSyncDownFirst;
- (BOOL)brc_isCloudKitInternalErrorCode:(int)arg1;
- (BOOL)brc_isCloudKitOutOfQuota;
- (BOOL)brc_isCloudKitUnknownItemError;
- (BOOL)brc_isOutOfSpaceError;
- (BOOL)brc_isResetError;
- (BOOL)brc_isRetriable;
- (int)brc_syncOperationErrorKind;
- (id)brc_wrappedError;
- (id)description;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

- (id)_cplSafeUserInfoForXPCDidChange:(BOOL*)arg1;
- (id)cplSafeErrorForXPC;
- (id)cplShortDomainDescription;
- (id)cplUnderlyingPOSIXError;
- (BOOL)isCPLError;
- (BOOL)isCPLErrorWithCode:(int)arg1;
- (BOOL)isCPLOperationCancelledError;

// Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync

+ (id)errorFromSYErrorInfo:(id)arg1;
+ (id)errorWithSYError:(int)arg1 userInfo:(id)arg2;

- (id)idsIdentifier;
- (id)initWithSYError:(int)arg1 userInfo:(id)arg2;
- (BOOL)isFromRequest;
- (unsigned short)messageID;
- (id)messageSent;
- (id)persistentUserInfo;

// Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP

- (BOOL)shouldDisplayToUser;

// Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal

- (BOOL)isAuthenticationError;

// Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP

+ (id)hmErrorWithCode:(int)arg1;
+ (id)hmErrorWithCode:(int)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4;
+ (id)hmErrorWithCode:(int)arg1 userInfo:(id)arg2;

- (id)shortDescription;

// Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream

+ (id)MMCSErrorWithDomain:(id)arg1 code:(int)arg2 description:(id)arg3;
+ (id)MSErrorWithDomain:(id)arg1 code:(int)arg2 description:(id)arg3;
+ (id)MSErrorWithDomain:(id)arg1 code:(int)arg2 description:(id)arg3 suggestion:(id)arg4;
+ (id)MSErrorWithDomain:(id)arg1 code:(int)arg2 description:(id)arg3 underlyingError:(id)arg4;
+ (id)MSErrorWithDomain:(id)arg1 code:(int)arg2 description:(id)arg3 underlyingError:(id)arg4 additionalUserInfo:(id)arg5;

- (int)MMCSErrorType;
- (BOOL)MMCSIsAuthorizationError;
- (BOOL)MMCSIsCancelError;
- (BOOL)MMCSIsFatalError;
- (BOOL)MMCSIsNetworkConditionsError;
- (id)MMCSRetryAfterDate;
- (BOOL)MSASStateMachineIsCanceledError;
- (BOOL)MSCanBeIgnored;
- (BOOL)MSContainsErrorWithDomain:(id)arg1 code:(int)arg2;
- (id)MSFindPrimaryError;
- (BOOL)MSIsAuthError;
- (BOOL)MSIsBadTokenError;
- (BOOL)MSIsCounted;
- (BOOL)MSIsFatal;
- (BOOL)MSIsQuotaError;
- (BOOL)MSIsRegistrationError;
- (BOOL)MSIsTemporaryNetworkError;
- (id)MSMMCSRetryAfterDate;
- (id)MSMakePrimaryError;
- (BOOL)MSNeedsBackoff;
- (id)MSVerboseDescription;
- (void)_MMCSApplyBlock:(id /* block */)arg1;
- (void)_MSApplyBlock:(id /* block */)arg1;
- (id)_MSVerboseDescriptionRecursionCount:(int)arg1;

// Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC

+ (id)cecAcknowledgementErrorWithUnderlyingError:(id)arg1;
+ (id)cecFeatureAbortErrorWithOpCode:(unsigned char)arg1 reason:(unsigned char)arg2 method:(id)arg3;
+ (id)cecIOErrorWithUnderlyingError:(id)arg1;

- (BOOL)isCECAcknowledgementError;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess

- (id)DAExtendedDescription;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)_gkUnauthenticatedError;
+ (id)serverErrorForCode:(int)arg1 withReason:(id)arg2;
+ (id)serverErrorForCode:(int)arg1 withUserInfo:(id)arg2;
+ (id)userErrorForCode:(int)arg1 underlyingError:(id)arg2;
+ (id)userErrorForCode:(int)arg1 userInfo:(id)arg2;
+ (id)userErrorForServerCode:(int)arg1 reason:(id)arg2;
+ (id)userErrorForServerCode:(int)arg1 reason:(id)arg2 userInfo:(id)arg3;
+ (id)userErrorForServerError:(id)arg1;
+ (id)userErrorForServerError:(id)arg1 userInfo:(id)arg2;

- (BOOL)_gkIsUnauthenticatedError;

// Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference

+ (id)AVConferenceServiceError:(int)arg1 detailCode:(int)arg2 description:(id)arg3;
+ (id)AVConferenceServiceError:(int)arg1 detailedCode:(int)arg2 filePath:(id)arg3 description:(id)arg4 reason:(id)arg5;
+ (id)AVConferenceServiceError:(int)arg1 detailedCode:(int)arg2 returnCode:(int)arg3 filePath:(id)arg4 description:(id)arg5 reason:(id)arg6;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)_geo_errorFromXPCData:(id)arg1;
+ (id)zilchDecoderErrorForNoSolution;

- (id)_geo_newXPCData;
- (id)zilchDecoderTileLoadingError;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (BOOL)hd_isFromRequest;
- (BOOL)hd_isResponseTimeout;
- (unsigned short)hd_messageID;
- (id)hd_messageIDSIdentifier;
- (id)hd_messageSent;
- (id)hd_persistentMessage;
- (id)hd_persistentUserInfo;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

+ (id)hmErrorWithCode:(int)arg1;
+ (id)hmErrorWithCode:(int)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4;
+ (id)hmErrorWithCode:(int)arg1 userInfo:(id)arg2;

- (id)conciseCKError;
- (id)hmErrorFromCKError;

// Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing

+ (id)hs_cloudErrorWithCode:(int)arg1 userInfo:(id)arg2;
+ (id)hs_cloudLibraryUploadErrorWithCode:(int)arg1 userInfo:(id)arg2;
+ (id)hs_homeSharingErrorWithCode:(int)arg1 userInfo:(id)arg2;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

+ (id)genericErrorWithFile:(const char *)arg1 function:(const char *)arg2 lineNumber:(int)arg3;

// Image: /System/Library/PrivateFrameworks/MIME.framework/MIME

+ (id)mf_cancelledError;
+ (id)mf_timeoutError;

- (BOOL)mf_isCancelledError;
- (BOOL)mf_isTimeoutError;

// Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration

+ (id)MCErrorWithDomain:(id)arg1 code:(int)arg2 description:(id)arg3 errorType:(id)arg4;
+ (id)MCErrorWithDomain:(id)arg1 code:(int)arg2 descriptionArray:(id)arg3 errorType:(id)arg4;
+ (id)MCErrorWithDomain:(id)arg1 code:(int)arg2 descriptionArray:(id)arg3 suggestion:(id)arg4 USEnglishSuggestion:(id)arg5 underlyingError:(id)arg6 errorType:(id)arg7;
+ (id)MCErrorWithDomain:(id)arg1 code:(int)arg2 descriptionArray:(id)arg3 underlyingError:(id)arg4 errorType:(id)arg5;

- (BOOL)MCContainsErrorDomain:(id)arg1 code:(int)arg2;
- (id)MCCopyAsPrimaryError;
- (id)MCErrorType;
- (id)MCFindPrimaryError;
- (id)MCUSEnglishDescription;
- (id)MCUSEnglishSuggestion;
- (id)MCVerboseDescription;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

- (BOOL)mf_isInaccessibleAccountCredentialError;
- (BOOL)mf_isMissingAccountCredentialError;
- (BOOL)mf_isUserCancelledError;
- (id)mf_moreInfo;
- (id)mf_shortDescription;
- (BOOL)mf_shouldBeReportedToUser;
- (BOOL)mf_shouldFailDownload;

// Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary

+ (id)ml_errorWithCode:(unsigned int)arg1;
+ (id)ml_errorWithCode:(unsigned int)arg1 description:(id)arg2;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)tsu_errorWithCode:(int)arg1 userInfo:(id)arg2;
+ (id)tsu_errorWithDomain:(id)arg1 code:(int)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4;
+ (id)tsu_errorWithDomain:(id)arg1 code:(int)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4 userInfo:(id)arg5;
+ (id)tsu_errorWithDomain:(id)arg1 code:(int)arg2 description:(id)arg3 recoverySuggestion:(id)arg4;
+ (id)tsu_errorWithDomain:(id)arg1 code:(int)arg2 description:(id)arg3 underlyingError:(id)arg4;

- (BOOL)tsu_isCancelError;
- (BOOL)tsu_isOutOfSpaceError;
- (id)tsu_localizedAlertMessage;
- (id)tsu_localizedAlertTitle;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

- (void)_safari_enumerateCloudKitErrorsWithBlock:(id /* block */)arg1;
- (BOOL)safari_errorOrAnyPartialErrorHasCloudKitErrorCode:(int)arg1;
- (BOOL)safari_errorOrAnyPartialErrorHasCloudKitInternalErrorCode:(int)arg1;

// Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol

- (BOOL)pc_isDCErrorWithCode:(int)arg1;
- (BOOL)pc_isNSCocoaErrorWithCode:(int)arg1;

// Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks

+ (id)st_startWorkoutErrorWithCode:(int)arg1;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

- (BOOL)isSiriUISnippetPluginError;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

+ (id)errorWithDescription:(id)arg1;
+ (id)errorWithDomain:(id)arg1 code:(int)arg2 localizedDescription:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(int)arg2 localizedDescription:(id)arg3 userInfo:(id)arg4;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary

+ (id)tl_errorWithDomain:(id)arg1 description:(id)arg2;

- (id)tl_nonRedundantDescription;

// Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail

+ (id)errorWithDomain:(id)arg1 code:(int)arg2 localizedDescription:(id)arg3;
+ (id)errorWithStreamDomain:(long)arg1 code:(long)arg2 localizedDescription:(id)arg3;

- (BOOL)isConnectivityError;
- (BOOL)isEqualToError:(id)arg1;
- (BOOL)isExpiredPasswordError;
- (BOOL)isInvalidSubscriberError;
- (BOOL)isNewPasswordError;
- (BOOL)isPasswordMismatchError;
- (BOOL)isSecurityError;
- (BOOL)isServerError;
- (BOOL)isStreamDomain:(long)arg1 error:(long)arg2;
- (BOOL)shouldPresentErrorForTaskType:(int)arg1;

// Image: /System/Library/PrivateFrameworks/WebApp.framework/WebApp

- (id)failingURL;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

+ (void)_registerWebKitErrors;
+ (id)_webKitErrorWithCode:(int)arg1 failingURL:(id)arg2;
+ (id)_webKitErrorWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3;
+ (void)_webkit_addErrorsWithCodesAndDescriptions:(id)arg1 inDomain:(id)arg2;
+ (id)_webkit_errorWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3;

- (id)_initWithPluginErrorCode:(int)arg1 contentURL:(id)arg2 pluginPageURL:(id)arg3 pluginName:(id)arg4 MIMEType:(id)arg5;
- (id)_webkit_initWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3;

// Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI

+ (id)_webUI_WebUIErrorWithCode:(unsigned int)arg1 URL:(id)arg2;

// Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore

- (BOOL)wk_representsTransientConnectivityIssueForAttempt:(unsigned int)arg1;

// Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore

- (id)errorBySettingFatalError:(BOOL)arg1;
- (BOOL)isEqual:(id)arg1 compareUserInfo:(BOOL)arg2;
- (BOOL)isFatalError;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (id)tsa_errorWithCode:(int)arg1;
+ (id)tsk_errorWithTSKWarning:(id)arg1;
+ (id)tsp_errorWithCode:(int)arg1;
+ (id)tsp_errorWithCode:(int)arg1 userInfo:(id)arg2;
+ (id)tsp_recoverableErrorWithCode:(int)arg1;
+ (id)tsp_recoverableErrorWithError:(id)arg1;
+ (id)tsu_IOErrorWithCode:(int)arg1;
+ (id)tsu_IOErrorWithCode:(int)arg1 userInfo:(id)arg2;
+ (id)tsu_IOReadErrorWithErrno:(int)arg1;
+ (id)tsu_IOWriteErrorWithErrno:(int)arg1;
+ (id)tsu_errorWithCode:(int)arg1 userInfo:(id)arg2;
+ (id)tsu_errorWithDomain:(id)arg1 code:(int)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4;
+ (id)tsu_errorWithDomain:(id)arg1 code:(int)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4 userInfo:(id)arg5;
+ (id)tsu_errorWithDomain:(id)arg1 code:(int)arg2 description:(id)arg3 recoverySuggestion:(id)arg4;
+ (id)tsu_errorWithDomain:(id)arg1 code:(int)arg2 description:(id)arg3 underlyingError:(id)arg4;

- (BOOL)tsa_isCollaborationError;
- (BOOL)tsp_isRecoverable;
- (int)tsu_IOErrorNumber;
- (BOOL)tsu_isCancelError;
- (BOOL)tsu_isOutOfSpaceError;
- (id)tsu_localizedAlertMessage;
- (id)tsu_localizedAlertTitle;

// Image: /usr/lib/libprequelite.dylib

+ (id)errorForDB:(struct sqlite3 { }*)arg1;
+ (id)errorForDB:(struct sqlite3 { }*)arg1 SQL:(id)arg2;
+ (id)errorForDB:(struct sqlite3 { }*)arg1 stmt:(struct sqlite3_stmt { }*)arg2;
+ (id)errorWithSqliteCode:(int)arg1 andMessage:(id)arg2;

- (int)extendedSqliteCode;
- (BOOL)isSqliteErrorCode:(int)arg1;
- (id)sqliteStatement;

@end
