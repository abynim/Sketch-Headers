#import "MSImmutableModelBase.h"

@class MSImmutableBorderStyleCollection, MSImmutableFillStyleCollection, MSImmutableGraphicsContextSettings, MSImmutableInnerShadowStyleCollection, MSImmutableShadowStyleCollection, MSImmutableStyleBlur, MSImmutableStyleBorderOptions, MSImmutableStyleColorControls, MSImmutableStyleReflection, MSImmutableTextStyle, NSString;

@interface _MSImmutableStyle : MSImmutableModelBase
{
    MSImmutableBorderStyleCollection *_borders;
    unsigned long long _endDecorationType;
    MSImmutableFillStyleCollection *_fills;
    MSImmutableInnerShadowStyleCollection *_innerShadows;
    long long _miterLimit;
    MSImmutableShadowStyleCollection *_shadows;
    NSString *_sharedObjectID;
    unsigned long long _startDecorationType;
    MSImmutableStyleBlur *_blur;
    MSImmutableStyleBorderOptions *_borderOptions;
    MSImmutableStyleColorControls *_colorControls;
    MSImmutableGraphicsContextSettings *_contextSettings;
    MSImmutableStyleReflection *_reflection;
    MSImmutableTextStyle *_textStyle;
}

@property(retain, nonatomic) MSImmutableTextStyle *textStyle; // @synthesize textStyle=_textStyle;
@property(retain, nonatomic) MSImmutableStyleReflection *reflection; // @synthesize reflection=_reflection;
@property(retain, nonatomic) MSImmutableGraphicsContextSettings *contextSettings; // @synthesize contextSettings=_contextSettings;
@property(retain, nonatomic) MSImmutableStyleColorControls *colorControls; // @synthesize colorControls=_colorControls;
@property(retain, nonatomic) MSImmutableStyleBorderOptions *borderOptions; // @synthesize borderOptions=_borderOptions;
@property(retain, nonatomic) MSImmutableStyleBlur *blur; // @synthesize blur=_blur;
@property(nonatomic) unsigned long long startDecorationType; // @synthesize startDecorationType=_startDecorationType;
@property(retain, nonatomic) NSString *sharedObjectID; // @synthesize sharedObjectID=_sharedObjectID;
@property(retain, nonatomic) MSImmutableShadowStyleCollection *shadows; // @synthesize shadows=_shadows;
@property(nonatomic) long long miterLimit; // @synthesize miterLimit=_miterLimit;
@property(retain, nonatomic) MSImmutableInnerShadowStyleCollection *innerShadows; // @synthesize innerShadows=_innerShadows;
@property(retain, nonatomic) MSImmutableFillStyleCollection *fills; // @synthesize fills=_fills;
@property(nonatomic) unsigned long long endDecorationType; // @synthesize endDecorationType=_endDecorationType;
@property(retain, nonatomic) MSImmutableBorderStyleCollection *borders; // @synthesize borders=_borders;
- (void).cxx_destruct;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

