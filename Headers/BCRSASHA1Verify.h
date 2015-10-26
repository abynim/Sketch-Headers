#import "NSObject.h"

@class NSData, NSError;

@interface BCRSASHA1Verify : NSObject
{
    BOOL _verified;
    NSError *_error;
    NSData *_inputData;
    struct OpaqueSecKeyRef *_publicKey;
    NSData *_signatureData;
}

@property(retain, nonatomic) NSData *signatureData; // @synthesize signatureData=_signatureData;
@property(nonatomic) struct OpaqueSecKeyRef *publicKey; // @synthesize publicKey=_publicKey;
@property(retain, nonatomic) NSData *inputData; // @synthesize inputData=_inputData;
@property(nonatomic) BOOL verified; // @synthesize verified=_verified;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)verify;
- (void)dealloc;
- (id)initWithInputData:(id)arg1 publicKey:(struct OpaqueSecKeyRef *)arg2 signatureData:(id)arg3;

@end

