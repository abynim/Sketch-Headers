//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol SMKServerControllerDelegate;

@interface SMKServerController : NSObject
{
    NSArray *_connections;
    id <SMKServerControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SMKServerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *connections; // @synthesize connections=_connections;
- (id)init;

@end
