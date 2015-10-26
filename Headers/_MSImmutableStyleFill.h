#import "MSImmutableStyleBasicFill.h"

@class MSImageProxy;

@interface _MSImmutableStyleFill : MSImmutableStyleBasicFill
{
    MSImageProxy *_image;
    long long _noiseIndex;
    double _noiseIntensity;
    long long _patternFillType;
    double _patternTileScale;
}

@property(nonatomic) double patternTileScale; // @synthesize patternTileScale=_patternTileScale;
@property(nonatomic) long long patternFillType; // @synthesize patternFillType=_patternFillType;
@property(nonatomic) double noiseIntensity; // @synthesize noiseIntensity=_noiseIntensity;
@property(nonatomic) long long noiseIndex; // @synthesize noiseIndex=_noiseIndex;
@property(retain, nonatomic) MSImageProxy *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

