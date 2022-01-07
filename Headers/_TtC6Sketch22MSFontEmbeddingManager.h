//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSDocument, NSArray, SCKWorkspace;

@interface _TtC6Sketch22MSFontEmbeddingManager : NSObject
{
    // Error parsing type: , name: document
    // Error parsing type: , name: workspace
    // Error parsing type: , name: hidesMissingFonts
    // Error parsing type: , name: fontInfos
}

+ (id)fontInfosDidChangeNotificationName;
- (void).cxx_destruct;
- (id)init;
- (void)endObservingFontChanges;
- (void)beginObservingFontChanges;
- (void)replaceFontAtIndex:(long long)arg1 withFont:(id)arg2;
@property(nonatomic) long long embeddingState;
- (void)setEmbedded:(BOOL)arg1 forFontAtIndex:(long long)arg2;
- (BOOL)isEmbeddedForFontAtIndex:(long long)arg1;
@property(nonatomic, readonly) BOOL hasMissingAppleFonts;
- (id)documentFontAtIndex:(long long)arg1;
@property(nonatomic, readonly) NSArray *fonts;
@property(nonatomic, copy) NSArray *fontInfos;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;
@property(nonatomic) BOOL hidesMissingFonts; // @synthesize hidesMissingFonts;
@property(nonatomic, retain) SCKWorkspace *workspace; // @synthesize workspace;
@property(nonatomic, readonly) MSDocument *document; // @synthesize document;

@end

