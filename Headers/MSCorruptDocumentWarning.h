//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface MSCorruptDocumentWarning : NSObject
{
    NSURL *_supportURL;
}

+ (BOOL)shouldAttemptToOpenCorruptDocument:(id)arg1 supportURL:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *supportURL; // @synthesize supportURL=_supportURL;
- (BOOL)alertDocumentCorruptionWasDetected:(id)arg1;
- (void)contactSupportAction:(id)arg1;

@end

