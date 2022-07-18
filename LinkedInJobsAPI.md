# Get started with LinkedIn Jobs API

## What does it do?

Linkedin Job Posting API is one of the Talent solution APIs provided by the organisation for developers seeking to build talent related integrations.
It enables authorized third parties to post jobs directly to Linkedin. To access these APIs you need to apply and come into a partner agreement with [Linkedin Talent Solutions](https://business.linkedin.com/talent-solutions/talent-hub/integrations#all).
By filling up the form provided [here](https://business.linkedin.com/talent-solutions/ats-partners/partner-application), you can integrate your product with Linkedin Talent solution which includes Job posting API.

Now, that you know about the procedure to get access, let's dive into what all it has to offer!

## Let's begin!

Microsoft Linkedin Talent APIs are all listed and categorised on [Postman]([https://www.postman.com/](https://www.postman.com/linkedin-developer-apis/workspace/linkedin-talent-solutions/overview). 

If you are not familiar with postman, it is a one stop solution for all your API requirements, from building to maintaining APIs. 

### 1. Postman
It's a big network of developers and their APIs open to everyone. Once you are on Linkedin Talent Solutions workspace, you can access APIs provided by Linkedin resources as an authorized developer.
This not only serves as a reference for developers to understand use of the APIs but also them to test their basic CRUD request methods for the Restful APIs provided in the collection.

![image](https://user-images.githubusercontent.com/59767187/179495529-1ae3a5f8-631c-4351-a1db-b95229ca9f1c.png)
Fig 1. Postman playground for developers to try out different requests.

**To start understanding with Postman:**

- Create an account and sign in as a user on postman. 
- Fork the [Job posting workspace](https://www.postman.com/linkedin-developer-apis/workspace/linkedin-talent-solutions/collection/16069442-751fa4d1-d54b-4fb7-be90-45e39047b536?ctx=documentation)
- Explore the use cases and resources.

<br/>

**Major use cases provided in the workspace are:**

- Create a basic job with foundation schema
- Create a basic jobs with RCSS
-Create promoted job with promoted jobs extension schema

⭐[Find sample request body and API header here](https://docs.microsoft.com/en-us/linkedin/talent/job-postings/api/create-jobs)

### 2. Planning Template- Microsoft Docs
To plan out the development lifescycle for this specific API use cases, Microsoft docs provides a proper timeline. It is recommended to follow this roadmap.

**Requesting Access**. 
- Afer filling up the form with Linkedin Talent Solutions as mentioned above, you will receive approval from them and further information on moving forward with legal API contract. 
- By creating a developer application on [developer's platform](https://developer.linkedin.com/)  you can request access.
- There is a zendesk ticket that is submitted, which is returned to you within few days with a list of resources like testing environment.

**Develop and Test**
- It is advised to create a fully functioning structure to work with Job posting API beforehand
- Checkout [Foundation Schema](https://docs.microsoft.com/en-us/linkedin/talent/job-postings/api/job-posting-api-schema) provided to developers. You can also build over it.
- Test out required *certification use cases* provided on postman as needed for your development. 

**Review and get Approved**
- As a partner, you need to complete all applicable *certifications use cases* through Zendesk platform, creating a support ticket there.
- All the submitions made as videos will be reviewed by Linkedin team and feedback will be provided.
- If there are no corrections left to be made, the partner will be certified by Linkedin for production level development.


 Partner should configure production application in their production environment and perform quality testing independently
 
 ## Already a partner, what's next?
 First of all, congratulations! Now let's start integrating our application with the restful API provided.
 
 For instance, let's take creating job posting for multiple customers.
 
 - Create a sub application for posting jobs before starting with integration. 

⭐ This way you can work with API keys for each individual customer using the [Provisioning API](https://docs.microsoft.com/en-us/linkedin/talent/middleware-platform/provisioning-api) & application provided by Linkedin resources

```
POST  https://api.linkedin.com/v2/provisionedApplications
```

- Store the API key(customer id created using Provision API), Linkedin Developer Application id for each customer and in case of promoted jobs, keep the companyID too. 
- You can use existing customer API keys for [customers part of recruiting system connect](https://docs.microsoft.com/en-us/linkedin/talent/recruiter-system-connect/recruiter-system-connect)


## Trying it out


Take the retrieved authorization token (member ID):
![image](https://user-images.githubusercontent.com/59767187/179511254-8c6805df-b01e-4d3a-9b2b-a7896df67fb3.png)

Fig 2. Trying to create new Post request (via Microsoft Docs)

If you want to post an article make the following changes to the body:

```JSON
{
"author":"urn:li:person:YOUR_ID",
"lifecycleState":"PUBLISHED",
"specificContent":{
  "com.linkedin.ugc.ShareContent":{
    "shareCommentary":{
      "text":"Learning more about Linkedin by reading the LinkedIn Blog"
      },
      "shareMediaCategory:"ARTICLE",
      "media":[
        {
          "status":"READY",
          "originalUrl":"https://blog.linkedin.com/"
        }
       ]
      }
     },
     
     "visibility":{
        "com.linkedin.ugc.MemberNetworkVisibility:"CONNECTIONS"
  }
}
```

