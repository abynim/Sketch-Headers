#import "MSBaseGrid.h"

@interface _MSLayoutGrid : MSBaseGrid
{
    BOOL _drawHorizontal;
    BOOL _drawHorizontalLines;
    BOOL _drawVertical;
    BOOL _guttersOutside;
    double _columnWidth;
    double _gutterHeight;
    double _gutterWidth;
    double _horizontalOffset;
    double _numberOfColumns;
    double _rowHeightMultiplication;
    double _totalWidth;
}

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
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveTotalWidth:(double)arg1;
- (double)primitiveTotalWidth;
- (void)setPrimitiveRowHeightMultiplication:(double)arg1;
- (double)primitiveRowHeightMultiplication;
- (void)setPrimitiveNumberOfColumns:(double)arg1;
- (double)primitiveNumberOfColumns;
- (void)setPrimitiveHorizontalOffset:(double)arg1;
- (double)primitiveHorizontalOffset;
- (void)setPrimitiveGuttersOutside:(BOOL)arg1;
- (BOOL)primitiveGuttersOutside;
- (void)setPrimitiveGutterWidth:(double)arg1;
- (double)primitiveGutterWidth;
- (void)setPrimitiveGutterHeight:(double)arg1;
- (double)primitiveGutterHeight;
- (void)setPrimitiveDrawVertical:(BOOL)arg1;
- (BOOL)primitiveDrawVertical;
- (void)setPrimitiveDrawHorizontalLines:(BOOL)arg1;
- (BOOL)primitiveDrawHorizontalLines;
- (void)setPrimitiveDrawHorizontal:(BOOL)arg1;
- (BOOL)primitiveDrawHorizontal;
- (void)setPrimitiveColumnWidth:(double)arg1;
- (double)primitiveColumnWidth;
- (id)immutableModelObject;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

