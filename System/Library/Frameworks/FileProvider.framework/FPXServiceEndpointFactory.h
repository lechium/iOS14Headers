/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFileProviderServiceEndpointCreating.h>

@class NSDictionary, FPXDomainContext;

@interface FPXServiceEndpointFactory : NSObject <NSFileProviderServiceEndpointCreating> {

	NSDictionary* _serviceSources;
	FPXDomainContext* _domainContext;

}
-(void)getListenerEndpointForServiceName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithServiceSources:(id)arg1 domainContext:(id)arg2 ;
@end
