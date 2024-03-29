//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSArchiveReader.h>

@class NSDictionary, NSError, NSImage, SCKShare;

@interface MSDocumentReader : MSArchiveReader
{
    NSDictionary *_workspaceItems;
    NSError *_error;
}

+ (id)shareInfoForDocumentAtURL:(id)arg1;
+ (id)readerForDocumentAtURL:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSDictionary *workspaceItems; // @synthesize workspaceItems=_workspaceItems;
@property(readonly, nonatomic) SCKShare *share;
- (id)previewImageWithMaximumSize:(struct CGSize)arg1;
@property(readonly, nonatomic) NSImage *libraryPreviewImage;
@property(readonly, nonatomic) NSImage *previewImage;
@property(readonly, nonatomic) NSDictionary *metadata;
- (id)readImmutableDataWithCorruptionDetected:(char *)arg1 error:(id *)arg2;
- (unsigned long long)validate;
@property(readonly, nonatomic) NSDictionary *UIMetadata;
- (BOOL)open:(id *)arg1;
@property(readonly, nonatomic) long long compatibilityVersion;
@property(readonly, nonatomic) long long version;
- (void)repair;
- (BOOL)containsLibraryPreviewImage;
@property(readonly, nonatomic) BOOL containsPreviewImage;
@property(readonly, nonatomic) BOOL documentWasMigrated;
- (id)readDataWithCorruptionDetected:(char *)arg1 error:(id *)arg2;

@end

