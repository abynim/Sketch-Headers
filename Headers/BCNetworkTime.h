#import "NSObject.h"

@class NSString;

@interface BCNetworkTime : NSObject
{
    int _socket;
    CDUnknownBlockType _completion;
    NSString *_host;
    struct addrinfo *_allAddressInfo;
    struct addrinfo *_addressInfo;
    unsigned long long _timeout;
}

+ (void)requestTimeFromHost:(id)arg1 timeout:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(nonatomic) unsigned long long timeout; // @synthesize timeout=_timeout;
@property(nonatomic) int socket; // @synthesize socket=_socket;
@property(nonatomic) struct addrinfo *addressInfo; // @synthesize addressInfo=_addressInfo;
@property(nonatomic) struct addrinfo *allAddressInfo; // @synthesize allAddressInfo=_allAddressInfo;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)sendCompletion:(id)arg1;
- (void)requestNTPTime;
- (void)readResponse;
- (void)sendRequest;
- (void)closeSocket;
- (void)openSocket;
@property(readonly, nonatomic) BOOL isSocketOpen;
- (void)determineHostAddress;
- (void)dealloc;
- (id)initWithCompletionBlock:(CDUnknownBlockType)arg1;

@end

