//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSDocumentChangeIntervalNotifier;

@interface MSDocumentChangeNotifier : NSObject
{
    MSDocumentChangeIntervalNotifier *_instantNotifier;
    MSDocumentChangeIntervalNotifier *_fastNotifier;
    MSDocumentChangeIntervalNotifier *_mediumNotifier;
    MSDocumentChangeIntervalNotifier *_verySlowNotifier;
    MSDocumentChangeIntervalNotifier *_slowNotifier;
    MSDocumentChangeIntervalNotifier *_superSlowNotifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MSDocumentChangeIntervalNotifier *superSlowNotifier; // @synthesize superSlowNotifier=_superSlowNotifier;
@property(retain, nonatomic) MSDocumentChangeIntervalNotifier *slowNotifier; // @synthesize slowNotifier=_slowNotifier;
@property(retain, nonatomic) MSDocumentChangeIntervalNotifier *verySlowNotifier; // @synthesize verySlowNotifier=_verySlowNotifier;
@property(retain, nonatomic) MSDocumentChangeIntervalNotifier *mediumNotifier; // @synthesize mediumNotifier=_mediumNotifier;
@property(retain, nonatomic) MSDocumentChangeIntervalNotifier *fastNotifier; // @synthesize fastNotifier=_fastNotifier;
@property(retain, nonatomic) MSDocumentChangeIntervalNotifier *instantNotifier; // @synthesize instantNotifier=_instantNotifier;
- (void)synchronouslyProcessUpdatesForObserversOfMinimumFrequency:(unsigned long long)arg1;
- (void)processDocumentUpdate:(id)arg1;
- (void)unregisterAllObservers;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1 withFrequency:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end

