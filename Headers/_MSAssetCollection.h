#import "MSModelObject.h"

@class MSArray, MSImageCollection;

@interface _MSAssetCollection : MSModelObject
{
    MSArray *_colors;
    MSArray *_gradients;
    MSImageCollection *_imageCollection;
    MSArray *_images;
}

@property(retain, nonatomic) MSArray *images; // @synthesize images=_images;
@property(retain, nonatomic) MSImageCollection *imageCollection; // @synthesize imageCollection=_imageCollection;
@property(retain, nonatomic) MSArray *gradients; // @synthesize gradients=_gradients;
@property(retain, nonatomic) MSArray *colors; // @synthesize colors=_colors;
- (void).cxx_destruct;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)syncPropertiesMatchingReference:(id)arg1 withObject:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveImages:(id)arg1;
- (id)primitiveImages;
- (void)setPrimitiveImageCollection:(id)arg1;
- (id)primitiveImageCollection;
- (void)setPrimitiveGradients:(id)arg1;
- (id)primitiveGradients;
- (void)setPrimitiveColors:(id)arg1;
- (id)primitiveColors;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

