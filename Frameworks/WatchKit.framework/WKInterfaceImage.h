/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface WKInterfaceImage : WKInterfaceObject <WKImageAnimatable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)setImage:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setImageNamed:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)startAnimating;
- (void)startAnimatingWithImagesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 duration:(double)arg2 repeatCount:(int)arg3;
- (void)stopAnimating;

@end