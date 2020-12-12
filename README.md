![](https://github.com/approach0/guide/blob/master/content/static/logo.png?raw=true)

Approach0 is a math-aware search engine.

## Online demo
Visit [https://approach0.xyz/search](https://approach0.xyz/demo)

![](https://github.com/approach0/guide/blob/master/content/static/mix-query.gif?raw=true)

## A little history
In 2014, the idea of searching math formulas takes off as a graducate level course project (at University of Delaware).

Later, I am persuaded by my instructor to further do some research work on this, she then became my advisor at that time.

In 2015 summer, [my thesis](https://github.com/tkhost/tkhost.github.io/raw/master/opmes/thesis-ref.pdf) on this topic is submitted.

In 2016, a [math-only search engine prototype](https://github.com/tkhost/tkhost.github.io/raw/master/opmes/ecir2016.pdf) is published in ECIR 2016.

Shortly after, this Github project is created, the goal was to rewrite most of the code and develop a math-aware search engine that can combine both math formula and text keywords into query.

In late 2016, the first rewritten version of math-aware search engine is complete, it is announced in [Meta site of Mathematics StackExchange](https://math.meta.stackexchange.com/questions/24978) and top users on that site have acknowledged the usefulness and also provided some good advices.

In 2017, I go back to China and work at Huawei doing a STB (TV box) project, irrelevant to search engine whatsoever.

In 2017 Fall, with the feeling that a math-aware search engine would probably provide huge value, I gave up my job and continued working on this topic as a PhD student at [RIT](https://www.cs.rit.edu/~dprl/members.html).
During the first two years of my PhD study, I kept improving the effectiveness and efficiency of the formula retrieval model.

In 2019, the new model has brought me [my first research full paper](http://ecir2019.org/best-paper-awards/) at ECIR 2019 conference (and a best application paper award!).

In May 2019, the new model has been put online, it has indexed over 1 million posts and there are only 3 search instances running on two low-cost Linode servers.

In early 2020, a paper focusing on efficiency has just been accepted at [ECIR 2020](https://link.springer.com/chapter/10.1007/978-3-030-45439-5_47) conference, this paper shows our system is the first one to produce very effective math search results with realtime query runtimes in single thread.

## Documentation
Please check out our documentation for technical details:
[https://approach0.xyz/docs](https://approach0.xyz/docs)

## License
MIT

## Updates (May 24, 2019)
Currently, this master branch is inactive, although the research branch has an early version of the new model, it only supports math queries.
The most updated code is closed source, it features very effective math-aware search with better efficiency (also supporting text query).
The new system can search on 1 million documents in real time, hosted by only two low-cost servers.
For information on the most recent development, please email `wxz8033 AT rit.edu` or contact me via WeChat (`hellozhongwei`).
