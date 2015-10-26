#import "NSOperation.h"

@class NSData, NSError;

@interface QCCRSASHA1VerifyT : NSOperation
{
    BOOL _verified;
    NSData *_inputData;
    struct OpaqueSecKeyRef *_publicKey;
    NSData *_signatureData;
    NSError *_error;
}

@property BOOL verified; // @synthesize verified=_verified;
@property(copy) NSError *error; // @synthesize error=_error;
@property(readonly, copy) NSData *signatureData; // @synthesize signatureData=_signatureData;
@property(readonly) struct OpaqueSecKeyRef *publicKey; // @synthesize publicKey=_publicKey;
@property(readonly, copy) NSData *inputData; // @synthesize inputData=_inputData;
- (void).cxx_destruct;
- (void)main;
- (void)dealloc;
- (id)initWithInputData:(id)arg1 publicKey:(struct OpaqueSecKeyRef *)arg2 signatureData:(id)arg3;

@end

