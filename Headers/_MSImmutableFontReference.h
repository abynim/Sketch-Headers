//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSImmutableModelObject.h>

@class MSFontData, NSArray, NSString;

@interface _MSImmutableFontReference : MSImmutableModelObject
{
    MSFontData *_fontData;
    NSString *_fontFamilyName;
    NSString *_fontFileName;
    long long _options;
    NSArray *_postscriptNames;
}

+ (Class)mutableClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *postscriptNames; // @synthesize postscriptNames=_postscriptNames;
@property(readonly, nonatomic) long long options; // @synthesize options=_options;
@property(readonly, nonatomic) NSString *fontFileName; // @synthesize fontFileName=_fontFileName;
@property(readonly, nonatomic) NSString *fontFamilyName; // @synthesize fontFamilyName=_fontFamilyName;
@property(readonly, nonatomic) MSFontData *fontData; // @synthesize fontData=_fontData;
- (BOOL)isEqualForCollaborationDiffToObject:(id)arg1;
- (void)collaborationDiffCompareChildrenAgainst:(id)arg1 treeComparison:(id)arg2;
- (id)collaborationDiffPropertiesNotMatching:(id)arg1 treeComparison:(id)arg2;
- (id)pluginDiffPropertiesNotMatching:(id)arg1 treeComparison:(id)arg2;
- (void)copyPropertiesFromObject:(id)arg1;
- (id)keysDifferingFromObject:(id)arg1;
- (BOOL)isEqualForDiffToObject:(id)arg1;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)decodePropertiesWithUnarchiver:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildRelationshipsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (void)performInitWithMutableModelObject:(id)arg1;

@end

