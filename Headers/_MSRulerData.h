//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSModelBase.h"

@class MSArray;

@interface _MSRulerData : MSModelBase
{
    long long _base;
    MSArray *_guides;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;
- (void).cxx_destruct;
- (BOOL)propertiesAreEqual:(id)arg1;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setAsParentOnChildren;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)setPrimitiveGuides:(id)arg1;
- (id)primitiveGuides;
- (void)setPrimitiveBase:(long long)arg1;
- (long long)primitiveBase;
@property(copy, nonatomic) MSArray *guides; // @synthesize guides=_guides;
- (id)guidesGeneric;
@property(nonatomic) long long base; // @synthesize base=_base;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

