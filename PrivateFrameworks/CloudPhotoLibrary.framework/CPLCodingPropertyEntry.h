/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSSet, NSString;

@interface CPLCodingPropertyEntry : NSObject {
    int (*_propertyGetterIMP)();
    int (*_propertySetterIMP)();
    struct objc_ivar { } *_ivar;
    NSSet *_propertyClasses;
    SEL _propertyGetter;
    SEL _propertySetter;
    BOOL _propertyType;
    NSString *_structName;
    bool_readOnly;
}

@property struct objc_ivar { }* ivar;
@property(retain) NSSet * propertyClasses;
@property SEL propertyGetter;
@property int (* propertyGetterIMP;
@property SEL propertySetter;
@property int (* propertySetterIMP;
@property BOOL propertyType;
@property(getter=isReadOnly) bool readOnly;
@property(copy) NSString * structName;

- (int (*)())propertyGetterIMP;
- (int (*)())propertySetterIMP;
- (void).cxx_destruct;
- (bool)isReadOnly;
- (struct objc_ivar { }*)ivar;
- (void*)ivarAddrForObject:(id)arg1;
- (id)ivarValueForObject:(id)arg1;
- (id)propertyClasses;
- (SEL)propertyGetter;
- (SEL)propertySetter;
- (BOOL)propertyType;
- (void)setIvar:(struct objc_ivar { }*)arg1;
- (void)setIvarValue:(id)arg1 forObject:(id)arg2;
- (void)setPropertyClasses:(id)arg1;
- (void)setPropertyGetter:(SEL)arg1;
- (void)setPropertyGetterIMP:(int (*)())arg1;
- (void)setPropertySetter:(SEL)arg1;
- (void)setPropertySetterIMP:(int (*)())arg1;
- (void)setPropertyType:(BOOL)arg1;
- (void)setReadOnly:(bool)arg1;
- (void)setStructName:(id)arg1;
- (id)structName;

@end