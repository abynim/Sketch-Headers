#import "NSObject.h"

@class NSDictionary;

@interface BCLicense : NSObject
{
    NSDictionary *payload;
    NSDictionary *metadata;
}

@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata;
@property(retain, nonatomic) NSDictionary *payload; // @synthesize payload;
- (void).cxx_destruct;
- (id)status;
- (id)licenseID;
- (void)log;
- (BOOL)purchaseIsExpiring;
- (long long)remainingDays;
- (long long)type;
- (BOOL)isValid;
- (BOOL)isAppNameValid;
- (BOOL)isExpired;
- (BOOL)isDeviceValid;
- (BOOL)isSignatureValid;
- (id)payloadHash;
- (BOOL)save;
- (id)initWithServerResult:(id)arg1;
- (id)init;

@end

