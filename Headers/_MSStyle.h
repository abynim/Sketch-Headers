#import "MSModelObject.h"

@class MSBorderStyleCollection, MSFillStyleCollection, MSGraphicsContextSettings, MSInnerShadowStyleCollection, MSShadowStyleCollection, MSStyleBlur, MSStyleBorderOptions, MSStyleColorControls, MSStyleReflection, MSTextStyle, NSString;

@interface _MSStyle : MSModelObject
{
    MSStyleBlur *_blur;
    MSStyleBorderOptions *_borderOptions;
    MSBorderStyleCollection *_borders;
    MSStyleColorControls *_colorControls;
    MSGraphicsContextSettings *_contextSettings;
    MSFillStyleCollection *_fills;
    MSInnerShadowStyleCollection *_innerShadows;
    long long _miterLimit;
    MSStyleReflection *_reflection;
    MSShadowStyleCollection *_shadows;
    NSString *_sharedObjectID;
    MSTextStyle *_textStyle;
}

@property(retain, nonatomic) MSTextStyle *textStyle; // @synthesize textStyle=_textStyle;
@property(retain, nonatomic) NSString *sharedObjectID; // @synthesize sharedObjectID=_sharedObjectID;
@property(retain, nonatomic) MSShadowStyleCollection *shadows; // @synthesize shadows=_shadows;
@property(retain, nonatomic) MSStyleReflection *reflection; // @synthesize reflection=_reflection;
@property(nonatomic) long long miterLimit; // @synthesize miterLimit=_miterLimit;
@property(retain, nonatomic) MSInnerShadowStyleCollection *innerShadows; // @synthesize innerShadows=_innerShadows;
@property(retain, nonatomic) MSFillStyleCollection *fills; // @synthesize fills=_fills;
@property(retain, nonatomic) MSGraphicsContextSettings *contextSettings; // @synthesize contextSettings=_contextSettings;
@property(retain, nonatomic) MSStyleColorControls *colorControls; // @synthesize colorControls=_colorControls;
@property(retain, nonatomic) MSBorderStyleCollection *borders; // @synthesize borders=_borders;
@property(retain, nonatomic) MSStyleBorderOptions *borderOptions; // @synthesize borderOptions=_borderOptions;
@property(retain, nonatomic) MSStyleBlur *blur; // @synthesize blur=_blur;
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
- (void)setPrimitiveTextStyle:(id)arg1;
- (id)primitiveTextStyle;
- (void)setPrimitiveSharedObjectID:(id)arg1;
- (id)primitiveSharedObjectID;
- (void)setPrimitiveShadows:(id)arg1;
- (id)primitiveShadows;
- (void)setPrimitiveReflection:(id)arg1;
- (id)primitiveReflection;
- (void)setPrimitiveMiterLimit:(long long)arg1;
- (long long)primitiveMiterLimit;
- (void)setPrimitiveInnerShadows:(id)arg1;
- (id)primitiveInnerShadows;
- (void)setPrimitiveFills:(id)arg1;
- (id)primitiveFills;
- (void)setPrimitiveContextSettings:(id)arg1;
- (id)primitiveContextSettings;
- (void)setPrimitiveColorControls:(id)arg1;
- (id)primitiveColorControls;
- (void)setPrimitiveBorders:(id)arg1;
- (id)primitiveBorders;
- (void)setPrimitiveBorderOptions:(id)arg1;
- (id)primitiveBorderOptions;
- (void)setPrimitiveBlur:(id)arg1;
- (id)primitiveBlur;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

