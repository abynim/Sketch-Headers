#import "NSObject.h"

@interface AFNetworkReachabilityManager : NSObject
{
    long long _networkReachabilityStatus;
    struct __SCNetworkReachability *_networkReachability;
    unsigned long long _networkReachabilityAssociation;
    CDUnknownBlockType _networkReachabilityStatusBlock;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)managerForAddress:(const void *)arg1;
+ (id)managerForDomain:(id)arg1;
+ (id)sharedManager;
@property(copy, nonatomic) CDUnknownBlockType networkReachabilityStatusBlock; // @synthesize networkReachabilityStatusBlock=_networkReachabilityStatusBlock;
@property(nonatomic) unsigned long long networkReachabilityAssociation; // @synthesize networkReachabilityAssociation=_networkReachabilityAssociation;
@property(nonatomic) struct __SCNetworkReachability *networkReachability; // @synthesize networkReachability=_networkReachability;
@property(nonatomic) long long networkReachabilityStatus; // @synthesize networkReachabilityStatus=_networkReachabilityStatus;
- (void).cxx_destruct;
- (void)setReachabilityStatusChangeBlock:(CDUnknownBlockType)arg1;
- (id)localizedNetworkReachabilityStatusString;
- (void)stopMonitoring;
- (void)startMonitoring;
@property(readonly, nonatomic, getter=isReachableViaWiFi) BOOL reachableViaWiFi;
@property(readonly, nonatomic, getter=isReachableViaWWAN) BOOL reachableViaWWAN;
@property(readonly, nonatomic, getter=isReachable) BOOL reachable;
- (void)dealloc;
- (id)initWithReachability:(struct __SCNetworkReachability *)arg1;
- (id)init;

@end

