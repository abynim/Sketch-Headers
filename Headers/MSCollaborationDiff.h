//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchModel/BCTreeComparisonDelegate-Protocol.h>

@class MSImmutableModelObject, NSArray;

@interface MSCollaborationDiff : NSObject <BCTreeComparisonDelegate>
{
    NSArray *_changes;
    MSImmutableModelObject *_oldObject;
    MSImmutableModelObject *_currentObject;
}

+ (id)changesBetweenOldObject:(id)arg1 currentObject:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MSImmutableModelObject *currentObject; // @synthesize currentObject=_currentObject;
@property(retain, nonatomic) MSImmutableModelObject *oldObject; // @synthesize oldObject=_oldObject;
@property(retain, nonatomic) NSArray *changes; // @synthesize changes=_changes;
- (id)treeComparison:(id)arg1 propertiesOfObject:(id)arg2 notMatching:(id)arg3;
- (BOOL)treeComparison:(id)arg1 isObject:(id)arg2 theSameObjectAs:(id)arg3;
- (void)treeComparison:(id)arg1 compareChildrenOf:(id)arg2 against:(id)arg3;
- (id)initWithOldObject:(id)arg1 currentObject:(id)arg2;

@end

