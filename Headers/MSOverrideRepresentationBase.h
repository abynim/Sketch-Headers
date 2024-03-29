//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSImmutableLayer, MSSymbolInstance, NSArray;

@interface MSOverrideRepresentationBase : NSObject
{
    BOOL _isEditable;
    NSArray *_children;
    MSSymbolInstance *_instance;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isEditable; // @synthesize isEditable=_isEditable;
@property(readonly, nonatomic) __weak MSSymbolInstance *instance; // @synthesize instance=_instance;
@property(retain, nonatomic) NSArray *children; // @synthesize children=_children;
@property(readonly, nonatomic) BOOL isOpen;
@property(readonly, nonatomic) NSArray *flattenedChildren;
- (id)firstOverridePassingTest:(CDUnknownBlockType)arg1;
- (void)enumerate:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *selectedOverrides;
- (void)updateAfterSelectingChild;
@property(readonly, nonatomic) MSImmutableLayer *detachedLayer;
@property(readonly, nonatomic) struct CGAffineTransform transformForConvertingToInstance;
- (void)syncChildrenWithOverridesIfNeeded;
- (void)syncChildrenWithOverrides:(id)arg1;
- (id)initWithInstance:(id)arg1;

@end

