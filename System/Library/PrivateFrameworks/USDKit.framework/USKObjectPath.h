/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:50 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <USDKit/USDKit-Structs.h>
@interface USKObjectPath : NSObject {

	SdfPath _path;

}
-(id)initWithToken:(id)arg1 ;
-(SdfPath)path;
-(id)stringValue;
-(id)init;
-(id)initWithString:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)propertyName;
-(unsigned long long)hash;
-(id)tokenValue;
-(id)pathByAppendingPropertyComponent:(id)arg1 ;
-(id)initWithSdfPath:(SdfPath)arg1 ;
-(BOOL)isNodePath;
-(id)nodePath;
-(BOOL)isPropertyPath;
@end
