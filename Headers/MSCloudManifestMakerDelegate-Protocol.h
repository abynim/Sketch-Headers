//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchRendering/NSObject-Protocol.h>

@class MSCloudManifestMaker, MSImmutablePage, NSDictionary, _TtC11SketchModel24MSImmutableLayerAncestry;

@protocol MSCloudManifestMakerDelegate <NSObject>
- (NSDictionary *)cloudManifestMaker:(MSCloudManifestMaker *)arg1 presentationFileMetadataForPage:(MSImmutablePage *)arg2;
- (NSDictionary *)cloudManifestMaker:(MSCloudManifestMaker *)arg1 fileMetadataForAncestry:(_TtC11SketchModel24MSImmutableLayerAncestry *)arg2 layerBehavior:(unsigned long long)arg3 atScale:(double)arg4 withSize:(struct CGSize)arg5;
@end

