//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/NSObject-Protocol.h>

@class MSPasteboardLayers, NSArray, NSPasteboard;

@protocol MSPasteboardWriter <NSObject>
- (void)writeData:(MSPasteboardLayers *)arg1 toPasteboard:(NSPasteboard *)arg2;
- (NSArray *)supportedPasteboardTypes;
- (BOOL)canWriteDataToPasteboard:(NSPasteboard *)arg1;
@end

