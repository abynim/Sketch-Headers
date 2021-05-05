//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchRendering/NSCopying-Protocol.h>

@class MSImmutableColor, MSImmutableDocumentData, MSImmutableLayer, NSSet, NSString, _TtC11SketchModel24MSImmutableLayerAncestry;

@interface MSExportRequest : NSObject <NSCopying>
{
    BOOL _shouldTrim;
    BOOL _saveForWeb;
    BOOL _progressive;
    BOOL _interlaced;
    BOOL _drawAsynchronously;
    BOOL _includeArtboardBackground;
    BOOL _renderSymbolMasterAsInstances;
    NSString *_name;
    unsigned long long _options;
    NSSet *_includedLayerIDs;
    double _scale;
    MSImmutableColor *_exportBackgroundColor;
    _TtC11SketchModel24MSImmutableLayerAncestry *_layerAncestry;
    NSString *_format;
    double _compression;
    struct CGRect _rect;
}

+ (id)exportRequestFromLayerAncestry:(id)arg1 exportFormat:(id)arg2 inRect:(struct CGRect)arg3 renderingSymbolMasterAsInstances:(BOOL)arg4;
+ (id)exportRequestFromLayerAncestry:(id)arg1 exportFormat:(id)arg2 inRect:(struct CGRect)arg3;
+ (id)exportRequestsFromLayerAncestry:(id)arg1 exportFormats:(id)arg2 inRect:(struct CGRect)arg3;
+ (id)exportRequestsFromLayerAncestry:(id)arg1 exportFormats:(id)arg2;
+ (id)exportRequestsFromLayerAncestry:(id)arg1 inRect:(struct CGRect)arg2;
+ (id)exportRequestsFromLayerAncestry:(id)arg1;
+ (id)exportRequestFromExportFormat:(id)arg1 layer:(id)arg2 inRect:(struct CGRect)arg3 useIDForName:(BOOL)arg4;
+ (id)exportRequestsFromExportableLayer:(id)arg1 exportFormats:(id)arg2 inRect:(struct CGRect)arg3 useIDForName:(BOOL)arg4;
+ (id)exportRequestsFromExportableLayer:(id)arg1 inRect:(struct CGRect)arg2 useIDForName:(BOOL)arg3;
+ (id)exportRequestsFromExportableLayer:(id)arg1 exportFormats:(id)arg2 useIDForName:(BOOL)arg3;
+ (id)exportRequestsFromExportableLayer:(id)arg1 useIDForName:(BOOL)arg2;
+ (id)exportRequestsFromExportableLayer:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL renderSymbolMasterAsInstances; // @synthesize renderSymbolMasterAsInstances=_renderSymbolMasterAsInstances;
@property(nonatomic) BOOL includeArtboardBackground; // @synthesize includeArtboardBackground=_includeArtboardBackground;
@property(nonatomic) BOOL drawAsynchronously; // @synthesize drawAsynchronously=_drawAsynchronously;
@property(nonatomic) BOOL interlaced; // @synthesize interlaced=_interlaced;
@property(nonatomic) BOOL progressive; // @synthesize progressive=_progressive;
@property(nonatomic) double compression; // @synthesize compression=_compression;
@property(nonatomic) BOOL saveForWeb; // @synthesize saveForWeb=_saveForWeb;
@property(copy, nonatomic) NSString *format; // @synthesize format=_format;
@property(retain, nonatomic) _TtC11SketchModel24MSImmutableLayerAncestry *layerAncestry; // @synthesize layerAncestry=_layerAncestry;
@property(copy, nonatomic) MSImmutableColor *exportBackgroundColor; // @synthesize exportBackgroundColor=_exportBackgroundColor;
@property(nonatomic) BOOL shouldTrim; // @synthesize shouldTrim=_shouldTrim;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(copy, nonatomic) NSSet *includedLayerIDs; // @synthesize includedLayerIDs=_includedLayerIDs;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) MSImmutableDocumentData *immutableDocument;
@property(readonly, nonatomic) MSImmutableLayer *rootLayer;
- (BOOL)shouldExportLayer:(id)arg1;
- (id)init;
- (id)objectIDsForSelfAncestorsAndChildrenOfAncestry:(id)arg1;
- (void)configureForLayerAncestry:(id)arg1 layerOptions:(unsigned long long)arg2 includedIDs:(id)arg3;
- (void)configureForLayer:(id)arg1 layerOptions:(unsigned long long)arg2 includedIDs:(id)arg3;

@end

