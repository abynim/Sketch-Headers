//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSPresenceController;

@interface _TtC13SharedEditing18MSCoEditController : NSObject
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: isRunning
    // Error parsing type: , name: hasActiveNetworkTask
    // Error parsing type: , name: isForceClosing
    // Error parsing type: , name: serviceProvider
    // Error parsing type: , name: networkService
    // Error parsing type: , name: subscriber
    // Error parsing type: , name: progressTracker
    // Error parsing type: , name: logger
    // Error parsing type: , name: presenceController
    // Error parsing type: , name: currentFullUpload
    // Error parsing type: , name: metricsRecorder
    // Error parsing type: , name: proxyLogger
    // Error parsing type: , name: beta_wasDisabled
    // Error parsing type: , name: $__lazy_storage_$_reconnector
    // Error parsing type: , name: healthStatus
    // Error parsing type: , name: status
    // Error parsing type: , name: didShowNetworkErrorForCurrentVersionRequest
    // Error parsing type: , name: debugDelayOutgoingPatches
    // Error parsing type: , name: debugDelayIncomingPatches
    // Error parsing type: , name: pauseTasksCounter
    // Error parsing type: , name: $__lazy_storage_$_networkMonitorQueue
    // Error parsing type: , name: networkMonitor
}

- (void).cxx_destruct;
- (void)resumeTasks;
- (void)pauseTasks;
- (id)init;
@property(nonatomic, readonly) BOOL isEdited;
@property(nonatomic, retain) MSPresenceController *presenceController; // @synthesize presenceController;

@end

