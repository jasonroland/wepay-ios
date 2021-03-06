//
//  WPRoamHelper.h
//  WePay
//
//  Created by Chaitanya Bagaria on 8/4/15.
//  Copyright (c) 2015 WePay. All rights reserved.
//

#if defined(__has_include)
#if __has_include("RPx/MPOSCommunicationManager/RDeviceInfo.h") && __has_include("RUA/RUA.h") && __has_include("G4XSwiper/SwiperController.h")

#import <Foundation/Foundation.h>
#import <RUA/RUA.h>

@interface WPRoamHelper : NSObject

/**
 *  Converts Roam's error code into a string
 *
 *  @param response The error code from Roam
 *
 *  @return The error code as a string
 */
+ (NSString *)RUAErrorCode_toString:(RUAErrorCode)errorCode;

/**
 *  Converts Roam's response into a dictionary
 *
 *  @param response The response from Roam
 *
 *  @return The response as a dictionary
 */
+ (NSDictionary *) RUAResponse_toDictionary:(RUAResponse *)response;

/**
 *  Converts Roam's response into a string
 *
 *  @param response The response from Roam
 *
 *  @return The response as a string
 */
+ (NSString *) RUAResponse_toString:(RUAResponse *)response;

/**
 *  Converts Roam's response type into a string
 *
 *  @param response The response type from Roam
 *
 *  @return The response type as a string
 */

+ (NSString *) RUAResponseType_toString:(RUAResponseType)code;

/**
 *  Converts a Roam command into a string
 *
 *  @param response The command from Roam
 *
 *  @return The command as a string
 */

+ (NSString *) RUACommand_toString:(RUACommand)command;

/**
 *  Converts a Roam parameter into a string
 *
 *  @param param The parameter from Roam
 *
 *  @return The parameter name as a string
 */
+ (NSString *) RUAParameter_toString:(RUAParameter)param;

/**
 *  Converts Roam's progress message into a string
 *
 *  @param message The progress message from Roam
 *
 *  @return The progress message as a string
 */
+ (NSString *) RUAProgressMessage_toString:(RUAProgressMessage)message;

/**
 *  Extracts first name from Roam response dictionary
 *
 *  @param ruaData Roam respose dictionary
 *
 *  @return first name if available, otherwise empty string
 */
+ (NSString *) firstNameFromRUAData:(NSDictionary *) ruaData;


/**
 *  Extracts last name from Roam response dictionary
 *
 *  @param ruaData Roam respose dictionary
 *
 *  @return last name if available, otherwise empty string
 */

+ (NSString *) lastNameFromRUAData:(NSDictionary *) ruaData;


/**
 *  Extracts full name from Roam response dictionary
 *
 *  @param ruaData Roam respose dictionary
 *
 *  @return full name if available, otherwise nil
 */

+ (NSString *) fullNameFromRUAData:(NSDictionary *) ruaData;

@end

#endif
#endif
