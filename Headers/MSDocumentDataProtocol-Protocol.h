//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class MSDetachedContainer, NSArray, NSString;
@protocol MSLayerProtocol;

@protocol MSDocumentDataProtocol
@property(readonly, nonatomic) MSDetachedContainer *detachedSymbolContainer;
@property(readonly, nonatomic) NSArray *pages;
- (NSArray<MSLayerProtocol> *)descendantsToLayerWithID:(NSString *)arg1;
@end

