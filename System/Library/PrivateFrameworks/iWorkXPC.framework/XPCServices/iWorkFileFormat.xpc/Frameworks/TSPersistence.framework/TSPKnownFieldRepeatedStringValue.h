/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:42 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPKnownField.h>

@interface TSPKnownFieldRepeatedStringValue : TSPKnownField {

	RepeatedField<std::__1::basic_string<char> >* _values;

}
-(id)initWithFieldDescriptor:(const FieldDescriptor*)arg1 fieldInfo:(const FieldInfo*)arg2 message:(const Message*)arg3 reflection:(const Reflection*)arg4 ;
-(void)mergeToMessage:(Message*)arg1 reflection:(const Reflection*)arg2 ;
@end
