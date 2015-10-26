#import "MSModelObject.h"

@class MSExportOptions, MSRect, NSString;

@interface _MSLayer : MSModelObject
{
    BOOL _isFlippedHorizontal;
    BOOL _isFlippedVertical;
    BOOL _isLocked;
    BOOL _isVisible;
    BOOL _nameIsFixed;
    BOOL _shouldBreakMaskChain;
    MSExportOptions *_exportOptions;
    MSRect *_frame;
    long long _layerListExpandedType;
    NSString *_name;
    NSString *_originalObjectID;
    double _rotation;
}

@property(nonatomic) BOOL shouldBreakMaskChain; // @synthesize shouldBreakMaskChain=_shouldBreakMaskChain;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(retain, nonatomic) NSString *originalObjectID; // @synthesize originalObjectID=_originalObjectID;
@property(nonatomic) BOOL nameIsFixed; // @synthesize nameIsFixed=_nameIsFixed;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long layerListExpandedType; // @synthesize layerListExpandedType=_layerListExpandedType;
@property(nonatomic) BOOL isVisible; // @synthesize isVisible=_isVisible;
@property(nonatomic) BOOL isLocked; // @synthesize isLocked=_isLocked;
@property(nonatomic) BOOL isFlippedVertical; // @synthesize isFlippedVertical=_isFlippedVertical;
@property(nonatomic) BOOL isFlippedHorizontal; // @synthesize isFlippedHorizontal=_isFlippedHorizontal;
@property(retain, nonatomic) MSRect *frame; // @synthesize frame=_frame;
@property(retain, nonatomic) MSExportOptions *exportOptions; // @synthesize exportOptions=_exportOptions;
- (void).cxx_destruct;
- (BOOL)isEqualForSync:(id)arg1;
- (void)syncPropertiesMatchingReference:(id)arg1 withObject:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveShouldBreakMaskChain:(BOOL)arg1;
- (BOOL)primitiveShouldBreakMaskChain;
- (void)setPrimitiveRotation:(double)arg1;
- (double)primitiveRotation;
- (void)setPrimitiveOriginalObjectID:(id)arg1;
- (id)primitiveOriginalObjectID;
- (void)setPrimitiveNameIsFixed:(BOOL)arg1;
- (BOOL)primitiveNameIsFixed;
- (void)setPrimitiveName:(id)arg1;
- (id)primitiveName;
- (void)setPrimitiveLayerListExpandedType:(long long)arg1;
- (long long)primitiveLayerListExpandedType;
- (void)setPrimitiveIsVisible:(BOOL)arg1;
- (BOOL)primitiveIsVisible;
- (void)setPrimitiveIsLocked:(BOOL)arg1;
- (BOOL)primitiveIsLocked;
- (void)setPrimitiveIsFlippedVertical:(BOOL)arg1;
- (BOOL)primitiveIsFlippedVertical;
- (void)setPrimitiveIsFlippedHorizontal:(BOOL)arg1;
- (BOOL)primitiveIsFlippedHorizontal;
- (void)setPrimitiveFrame:(id)arg1;
- (id)primitiveFrame;
- (void)setPrimitiveExportOptions:(id)arg1;
- (id)primitiveExportOptions;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

