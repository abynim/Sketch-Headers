//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSBaseGrid.h>

@interface _MSLayoutGrid : MSBaseGrid
{
    double _columnWidth;
    BOOL _drawHorizontal;
    BOOL _drawHorizontalLines;
    BOOL _drawVertical;
    double _gutterHeight;
    double _gutterWidth;
    BOOL _guttersOutside;
    double _horizontalOffset;
    double _numberOfColumns;
    double _rowHeightMultiplication;
    double _totalWidth;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;
- (void)refaultChildrenAgainst:(id)arg1 inContext:(id)arg2;
- (void)setRaw_totalWidth:(double)arg1;
- (void)setRaw_rowHeightMultiplication:(double)arg1;
- (void)setRaw_numberOfColumns:(double)arg1;
- (void)setRaw_horizontalOffset:(double)arg1;
- (void)setRaw_guttersOutside:(BOOL)arg1;
- (void)setRaw_gutterWidth:(double)arg1;
- (void)setRaw_gutterHeight:(double)arg1;
- (void)setRaw_drawVertical:(BOOL)arg1;
- (void)setRaw_drawHorizontalLines:(BOOL)arg1;
- (void)setRaw_drawHorizontal:(BOOL)arg1;
- (void)setRaw_columnWidth:(double)arg1;
- (BOOL)removeCollaborationChild:(id)arg1;
- (void)registerCollaborationSubtree:(id)arg1;
- (id)childCollaborationObjectWithPlainID:(id)arg1;
- (void)pluginDiffCompareChildrenAgainst:(id)arg1 treeComparison:(id)arg2;
- (void)syncPropertiesFromObject:(id)arg1;
- (BOOL)propertiesAreEqual:(id)arg1 forPurpose:(unsigned long long)arg2;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setAsParentOnChildren;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
@property(nonatomic) double totalWidth; // @synthesize totalWidth=_totalWidth;
@property(nonatomic) double rowHeightMultiplication; // @synthesize rowHeightMultiplication=_rowHeightMultiplication;
@property(nonatomic) double numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(nonatomic) double horizontalOffset; // @synthesize horizontalOffset=_horizontalOffset;
@property(nonatomic) BOOL guttersOutside; // @synthesize guttersOutside=_guttersOutside;
@property(nonatomic) double gutterWidth; // @synthesize gutterWidth=_gutterWidth;
@property(nonatomic) double gutterHeight; // @synthesize gutterHeight=_gutterHeight;
@property(nonatomic) BOOL drawVertical; // @synthesize drawVertical=_drawVertical;
@property(nonatomic) BOOL drawHorizontalLines; // @synthesize drawHorizontalLines=_drawHorizontalLines;
@property(nonatomic) BOOL drawHorizontal; // @synthesize drawHorizontal=_drawHorizontal;
@property(nonatomic) double columnWidth; // @synthesize columnWidth=_columnWidth;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildRelationshipsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

