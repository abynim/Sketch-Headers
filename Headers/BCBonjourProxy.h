#import "NSObject.h"

#import "BCNetworkServiceDelegate.h"

@class BCBonjourConnection, BCNetworkService, NSDictionary, NSString, NSUUID;

@interface BCBonjourProxy : NSObject <BCNetworkServiceDelegate>
{
    CDUnknownBlockType _handler;
    NSUUID *_uuid;
    NSString *_model;
    NSString *_systemName;
    NSString *_systemVersion;
    NSString *_idiom;
    long long _state;
    long long _remoteState;
    BCBonjourConnection *_connection;
    BCNetworkService *_service;
    NSDictionary *_extendedInfo;
}

+ (id)keyPathsForValuesAffectingRemoteStateString;
+ (id)keyPathsForValuesAffectingStateString;
+ (id)keyPathsForValuesAffectingSystem;
+ (id)keyPathsForValuesAffectingConnected;
@property(retain, nonatomic) NSDictionary *extendedInfo; // @synthesize extendedInfo=_extendedInfo;
@property(retain, nonatomic) BCNetworkService *service; // @synthesize service=_service;
@property(retain, nonatomic) BCBonjourConnection *connection; // @synthesize connection=_connection;
@property long long remoteState; // @synthesize remoteState=_remoteState;
@property long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *idiom; // @synthesize idiom=_idiom;
@property(retain, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(retain, nonatomic) NSString *systemName; // @synthesize systemName=_systemName;
@property(retain, nonatomic) NSString *model; // @synthesize model=_model;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (void)updateProxyWithSystemDictionary:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)sendMessage:(id)arg1;
- (void)startConnecting;
- (int)openSocket;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) NSString *remoteStateString;
@property(readonly, nonatomic) NSString *stateString;
@property(readonly, nonatomic) NSString *system;
@property(readonly, nonatomic) NSString *name;
- (BOOL)connected;
- (void)disconnect;
- (void)connect;
- (void)updateWithService:(id)arg1;
- (void)cleanup;
- (void)dealloc;
- (id)initWithService:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)forceConnect;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

