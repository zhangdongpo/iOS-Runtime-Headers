/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFURLComponents : NSObject {
    HFHomeKitDispatcher * _homeKitDispatcher;
    NSURL * _url;
}

@property (nonatomic, readonly) unsigned long long destination;
@property (nonatomic, readonly) HFHomeKitDispatcher *homeKitDispatcher;
@property (nonatomic, readonly) NAFuture *homeKitObjectFuture;
@property (nonatomic, readonly) unsigned long long secondaryDestination;
@property (nonatomic, readonly) NSURL *url;

+ (id)_URLComponentsForDestination:(unsigned long long)arg1;
+ (id)aboutResidentDeviceURL;
+ (id)homeKitObjectURLForDestination:(unsigned long long)arg1 secondaryDestination:(unsigned long long)arg2 UUID:(id)arg3;
+ (id)locationPrivacyURL;
+ (id)musicLoginURL;
+ (id)musicPrivacyURL;
+ (id)siriPrivacyURL;

- (void).cxx_destruct;
- (id)_homeKitIdentifier;
- (id)description;
- (unsigned long long)destination;
- (id)homeKitDispatcher;
- (id)homeKitObjectFuture;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 homeKitDispatcher:(id)arg2;
- (unsigned long long)secondaryDestination;
- (id)url;

@end
