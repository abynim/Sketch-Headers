//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSMenuBuilder : NSObject
{
    id _target;
    SEL _action;
}

+ (id)menuBuilderWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)menuBuilderWithTarget:(id)arg1;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(retain, nonatomic) id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)dealloc;

@end

