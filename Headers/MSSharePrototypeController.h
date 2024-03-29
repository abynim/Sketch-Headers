//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSDocument, MSImmutableArtboardGroup, NSURL;

@interface MSSharePrototypeController : NSObject
{
    // Error parsing type: , name: document
    // Error parsing type: , name: artboard
    // Error parsing type: , name: isPreparing
    // Error parsing type: , name: link
    // Error parsing type: , name: _isCancelled
    // Error parsing type: , name: _cloudShare
    // Error parsing type: , name: _cloudArtboard
    // Error parsing type: , name: _subscription
    // Error parsing type: , name: subscriptionsController
    // Error parsing type: , name: queue
}

+ (long long)cancelledErrorCode;
+ (id)errorDomain;
- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
@property(nonatomic, readonly) BOOL isSupported;
- (void)request:(id)arg1 startingAt:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;
@property(nonatomic, copy) NSURL *link;
@property(nonatomic) BOOL isPreparing; // @synthesize isPreparing;
@property(nonatomic, retain) MSImmutableArtboardGroup *artboard; // @synthesize artboard;
@property(nonatomic) __weak MSDocument *document; // @synthesize document;

@end

