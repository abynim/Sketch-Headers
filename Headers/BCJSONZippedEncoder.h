//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BCFoundation/BCJSONEncoder.h>

@class NSMutableArray;

@interface BCJSONZippedEncoder : BCJSONEncoder
{
    void *_buffer;
    int _currentPos;
    BOOL _hasOpenFile;
    void *_zip;
    NSMutableArray *_objectsToEncode;
}

+ (id)errorWithErrno:(int)arg1 URL:(id)arg2;
+ (id)zipEncoderForWritingAtURL:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *objectsToEncode; // @synthesize objectsToEncode=_objectsToEncode;
@property(nonatomic) BOOL hasOpenFile; // @synthesize hasOpenFile=_hasOpenFile;
@property(nonatomic) void *zip; // @synthesize zip=_zip;
- (void)finishWriting;
- (void)writeData:(const void *)arg1 length:(unsigned long long)arg2;
- (void)archivePending;
- (id)nextObjectToEncode;
- (void)encodeZipable:(id)arg1;
- (BOOL)addZipable:(id)arg1;
- (BOOL)returnCheckingForError:(id *)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)finishEncodingError:(id *)arg1;
- (BOOL)encodeRawData:(id)arg1 toSubpath:(id)arg2 shouldCompress:(BOOL)arg3 error:(id *)arg4;
- (BOOL)encodeObject:(id)arg1 toSubpath:(id)arg2 error:(id *)arg3;

@end

