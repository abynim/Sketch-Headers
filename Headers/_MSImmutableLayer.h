//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSImmutableModelBase.h"

@class MSImmutableExportOptions, MSImmutableExportOptions<MSExportOptions>, MSImmutableRect, MSImmutableRect<MSRect>, NSDictionary, NSString;

@interface _MSImmutableLayer : MSImmutableModelBase
{
    BOOL _isFlippedHorizontal;
    BOOL _isFlippedVertical;
    BOOL _isLocked;
    BOOL _isVisible;
    long long _layerListExpandedType;
    NSString *_name;
    BOOL _nameIsFixed;
    NSString *_originalObjectID;
    double _rotation;
    BOOL _shouldBreakMaskChain;
    NSDictionary *_userInfo;
    MSImmutableExportOptions *_exportOptions;
    MSImmutableRect *_frame;
}

+ (Class)mutableClass;
@property(retain, nonatomic) MSImmutableRect<MSRect> *frame; // @synthesize frame=_frame;
@property(retain, nonatomic) MSImmutableExportOptions<MSExportOptions> *exportOptions; // @synthesize exportOptions=_exportOptions;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
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
- (void).cxx_destruct;
- (BOOL)attributesEqualAttributesForObject:(id)arg1;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)frameGeneric;
- (id)exportOptionsGeneric;
- (void)performInitWithMutableModelObject:(id)arg1;

@end

