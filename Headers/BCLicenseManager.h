#import "NSObject.h"

@class BCLicense, NSString, NSURL, NSURLSession;

@interface BCLicenseManager : NSObject
{
    BOOL _completedLoadingLicense;
    BCLicense *_license;
    NSString *_applicationID;
    NSString *_publicCertificate;
    NSURL *_licenseURL;
    NSURLSession *_urlSession;
}

@property(nonatomic) BOOL completedLoadingLicense; // @synthesize completedLoadingLicense=_completedLoadingLicense;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain, nonatomic) NSURL *licenseURL; // @synthesize licenseURL=_licenseURL;
@property(retain, nonatomic) NSString *publicCertificate; // @synthesize publicCertificate=_publicCertificate;
@property(retain, nonatomic) NSString *applicationID; // @synthesize applicationID=_applicationID;
@property(retain, nonatomic) BCLicense *license; // @synthesize license=_license;
- (void).cxx_destruct;
- (void)processURL:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)licenseStateChanged;
- (void)completeUpdateWithHandler:(CDUnknownBlockType)arg1 status:(long long)arg2 info:(id)arg3 error:(id)arg4;
- (void)checkForDeploymentKeyWithPath:(id)arg1 removeFile:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)requestTrialLicenseWithHandler:(CDUnknownBlockType)arg1;
- (void)fallbackToTrial:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)processLicenseRefreshResult:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)tryToRefreshLicense:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)processDataOfRegistration:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)registerWithLicenseKey:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (long long)numberOfDaysLeftInTrialMode;
- (long long)currentLicenseType;
- (void)validateLicenseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateLicenseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithApplicationID:(id)arg1 publicCertificate:(id)arg2 licenseURL:(id)arg3;

@end

